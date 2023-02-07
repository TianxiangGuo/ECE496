#include "AttentionMatmulReadB.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void AttentionMatmulReadB::thread_buffer_0_1_56_V_d0() {
    buffer_0_1_56_V_d0 = in_V_data_V_dout.read().range(455, 448);
}

void AttentionMatmulReadB::thread_buffer_0_1_56_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_56_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_56_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_57_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_57_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_57_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_57_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_57_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_57_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_57_V_d0() {
    buffer_0_1_57_V_d0 = in_V_data_V_dout.read().range(463, 456);
}

void AttentionMatmulReadB::thread_buffer_0_1_57_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_57_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_57_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_58_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_58_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_58_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_58_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_58_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_58_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_58_V_d0() {
    buffer_0_1_58_V_d0 = in_V_data_V_dout.read().range(471, 464);
}

void AttentionMatmulReadB::thread_buffer_0_1_58_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_58_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_58_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_59_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_59_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_59_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_59_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_59_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_59_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_59_V_d0() {
    buffer_0_1_59_V_d0 = in_V_data_V_dout.read().range(479, 472);
}

void AttentionMatmulReadB::thread_buffer_0_1_59_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_59_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_59_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_5_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_5_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_5_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_5_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_5_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_5_V_d0() {
    buffer_0_1_5_V_d0 = in_V_data_V_dout.read().range(47, 40);
}

void AttentionMatmulReadB::thread_buffer_0_1_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_5_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_5_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_60_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_60_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_60_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_60_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_60_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_60_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_60_V_d0() {
    buffer_0_1_60_V_d0 = in_V_data_V_dout.read().range(487, 480);
}

void AttentionMatmulReadB::thread_buffer_0_1_60_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_60_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_60_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_61_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_61_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_61_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_61_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_61_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_61_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_61_V_d0() {
    buffer_0_1_61_V_d0 = in_V_data_V_dout.read().range(495, 488);
}

void AttentionMatmulReadB::thread_buffer_0_1_61_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_61_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_61_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_62_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_62_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_62_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_62_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_62_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_62_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_62_V_d0() {
    buffer_0_1_62_V_d0 = in_V_data_V_dout.read().range(503, 496);
}

void AttentionMatmulReadB::thread_buffer_0_1_62_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_62_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_62_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_63_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_63_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_63_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_63_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_63_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_63_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_63_V_d0() {
    buffer_0_1_63_V_d0 = in_V_data_V_dout.read().range(511, 504);
}

void AttentionMatmulReadB::thread_buffer_0_1_63_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_63_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_63_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_6_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_6_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_6_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_6_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_6_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_6_V_d0() {
    buffer_0_1_6_V_d0 = in_V_data_V_dout.read().range(55, 48);
}

void AttentionMatmulReadB::thread_buffer_0_1_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_6_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_6_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_7_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_7_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_7_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_7_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_7_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_7_V_d0() {
    buffer_0_1_7_V_d0 = in_V_data_V_dout.read().range(63, 56);
}

void AttentionMatmulReadB::thread_buffer_0_1_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_7_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_7_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_8_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_8_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_8_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_8_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_8_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_8_V_d0() {
    buffer_0_1_8_V_d0 = in_V_data_V_dout.read().range(71, 64);
}

void AttentionMatmulReadB::thread_buffer_0_1_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_8_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_8_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_0_1_9_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_0_1_9_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_0_1_9_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_0_1_9_V_ce0 = ap_const_logic_1;
    } else {
        buffer_0_1_9_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_0_1_9_V_d0() {
    buffer_0_1_9_V_d0 = in_V_data_V_dout.read().range(79, 72);
}

void AttentionMatmulReadB::thread_buffer_0_1_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_0) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_0_1_9_V_we0 = ap_const_logic_1;
    } else {
        buffer_0_1_9_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_0_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_0_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_0_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_0_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_0_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_0_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_0_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_10_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_10_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_10_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_10_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_10_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_10_V_d0() {
    buffer_1_0_10_V_d0 = in_V_data_V_dout.read().range(87, 80);
}

void AttentionMatmulReadB::thread_buffer_1_0_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_10_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_10_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_11_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_11_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_11_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_11_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_11_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_11_V_d0() {
    buffer_1_0_11_V_d0 = in_V_data_V_dout.read().range(95, 88);
}

void AttentionMatmulReadB::thread_buffer_1_0_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_11_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_11_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_12_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_12_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_12_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_12_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_12_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_12_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_12_V_d0() {
    buffer_1_0_12_V_d0 = in_V_data_V_dout.read().range(103, 96);
}

void AttentionMatmulReadB::thread_buffer_1_0_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_12_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_12_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_13_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_13_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_13_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_13_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_13_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_13_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_13_V_d0() {
    buffer_1_0_13_V_d0 = in_V_data_V_dout.read().range(111, 104);
}

void AttentionMatmulReadB::thread_buffer_1_0_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_13_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_13_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_14_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_14_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_14_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_14_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_14_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_14_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_14_V_d0() {
    buffer_1_0_14_V_d0 = in_V_data_V_dout.read().range(119, 112);
}

void AttentionMatmulReadB::thread_buffer_1_0_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_14_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_14_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_15_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_15_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_15_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_15_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_15_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_15_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_15_V_d0() {
    buffer_1_0_15_V_d0 = in_V_data_V_dout.read().range(127, 120);
}

void AttentionMatmulReadB::thread_buffer_1_0_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_15_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_15_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_16_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_16_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_16_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_16_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_16_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_16_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_16_V_d0() {
    buffer_1_0_16_V_d0 = in_V_data_V_dout.read().range(135, 128);
}

void AttentionMatmulReadB::thread_buffer_1_0_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_16_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_16_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_17_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_17_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_17_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_17_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_17_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_17_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_17_V_d0() {
    buffer_1_0_17_V_d0 = in_V_data_V_dout.read().range(143, 136);
}

void AttentionMatmulReadB::thread_buffer_1_0_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_17_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_17_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_18_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_18_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_18_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_18_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_18_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_18_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_18_V_d0() {
    buffer_1_0_18_V_d0 = in_V_data_V_dout.read().range(151, 144);
}

void AttentionMatmulReadB::thread_buffer_1_0_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_18_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_18_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_19_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_19_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_19_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_19_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_19_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_19_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_19_V_d0() {
    buffer_1_0_19_V_d0 = in_V_data_V_dout.read().range(159, 152);
}

void AttentionMatmulReadB::thread_buffer_1_0_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_19_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_19_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_1_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_1_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_1_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_1_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_1_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_1_V_d0() {
    buffer_1_0_1_V_d0 = in_V_data_V_dout.read().range(15, 8);
}

void AttentionMatmulReadB::thread_buffer_1_0_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_1_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_1_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_20_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_20_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_20_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_20_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_20_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_20_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_20_V_d0() {
    buffer_1_0_20_V_d0 = in_V_data_V_dout.read().range(167, 160);
}

void AttentionMatmulReadB::thread_buffer_1_0_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_20_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_20_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_21_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_21_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_21_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_21_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_21_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_21_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_21_V_d0() {
    buffer_1_0_21_V_d0 = in_V_data_V_dout.read().range(175, 168);
}

void AttentionMatmulReadB::thread_buffer_1_0_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_21_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_21_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_22_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_22_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_22_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_22_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_22_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_22_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_22_V_d0() {
    buffer_1_0_22_V_d0 = in_V_data_V_dout.read().range(183, 176);
}

void AttentionMatmulReadB::thread_buffer_1_0_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_22_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_22_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_23_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_23_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_23_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_23_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_23_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_23_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_23_V_d0() {
    buffer_1_0_23_V_d0 = in_V_data_V_dout.read().range(191, 184);
}

void AttentionMatmulReadB::thread_buffer_1_0_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_23_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_23_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_24_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_24_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_24_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_24_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_24_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_24_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_24_V_d0() {
    buffer_1_0_24_V_d0 = in_V_data_V_dout.read().range(199, 192);
}

void AttentionMatmulReadB::thread_buffer_1_0_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_24_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_24_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_25_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_25_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_25_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_25_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_25_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_25_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_25_V_d0() {
    buffer_1_0_25_V_d0 = in_V_data_V_dout.read().range(207, 200);
}

void AttentionMatmulReadB::thread_buffer_1_0_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_25_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_25_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_26_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_26_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_26_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_26_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_26_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_26_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_26_V_d0() {
    buffer_1_0_26_V_d0 = in_V_data_V_dout.read().range(215, 208);
}

void AttentionMatmulReadB::thread_buffer_1_0_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_26_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_26_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_27_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_27_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_27_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_27_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_27_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_27_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_27_V_d0() {
    buffer_1_0_27_V_d0 = in_V_data_V_dout.read().range(223, 216);
}

void AttentionMatmulReadB::thread_buffer_1_0_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_27_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_27_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_28_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_28_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_28_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_28_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_28_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_28_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_28_V_d0() {
    buffer_1_0_28_V_d0 = in_V_data_V_dout.read().range(231, 224);
}

void AttentionMatmulReadB::thread_buffer_1_0_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_28_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_28_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_29_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_29_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_29_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_29_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_29_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_29_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_29_V_d0() {
    buffer_1_0_29_V_d0 = in_V_data_V_dout.read().range(239, 232);
}

void AttentionMatmulReadB::thread_buffer_1_0_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_29_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_29_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_2_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_2_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_2_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_2_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_2_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_2_V_d0() {
    buffer_1_0_2_V_d0 = in_V_data_V_dout.read().range(23, 16);
}

void AttentionMatmulReadB::thread_buffer_1_0_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_2_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_2_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_30_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_30_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_30_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_30_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_30_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_30_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_30_V_d0() {
    buffer_1_0_30_V_d0 = in_V_data_V_dout.read().range(247, 240);
}

void AttentionMatmulReadB::thread_buffer_1_0_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_30_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_30_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_31_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_31_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_31_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_31_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_31_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_31_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_31_V_d0() {
    buffer_1_0_31_V_d0 = in_V_data_V_dout.read().range(255, 248);
}

void AttentionMatmulReadB::thread_buffer_1_0_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_31_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_31_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_32_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_32_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_32_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_32_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_32_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_32_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_32_V_d0() {
    buffer_1_0_32_V_d0 = in_V_data_V_dout.read().range(263, 256);
}

void AttentionMatmulReadB::thread_buffer_1_0_32_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_32_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_32_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_33_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_33_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_33_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_33_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_33_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_33_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_33_V_d0() {
    buffer_1_0_33_V_d0 = in_V_data_V_dout.read().range(271, 264);
}

void AttentionMatmulReadB::thread_buffer_1_0_33_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_33_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_33_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_34_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_34_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_34_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_34_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_34_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_34_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_34_V_d0() {
    buffer_1_0_34_V_d0 = in_V_data_V_dout.read().range(279, 272);
}

void AttentionMatmulReadB::thread_buffer_1_0_34_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_34_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_34_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_35_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_35_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_35_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_35_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_35_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_35_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_35_V_d0() {
    buffer_1_0_35_V_d0 = in_V_data_V_dout.read().range(287, 280);
}

void AttentionMatmulReadB::thread_buffer_1_0_35_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_35_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_35_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_36_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_36_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_36_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_36_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_36_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_36_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_36_V_d0() {
    buffer_1_0_36_V_d0 = in_V_data_V_dout.read().range(295, 288);
}

void AttentionMatmulReadB::thread_buffer_1_0_36_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_36_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_36_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_37_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_37_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_37_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_37_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_37_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_37_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_37_V_d0() {
    buffer_1_0_37_V_d0 = in_V_data_V_dout.read().range(303, 296);
}

void AttentionMatmulReadB::thread_buffer_1_0_37_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_37_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_37_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_38_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_38_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_38_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_38_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_38_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_38_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_38_V_d0() {
    buffer_1_0_38_V_d0 = in_V_data_V_dout.read().range(311, 304);
}

void AttentionMatmulReadB::thread_buffer_1_0_38_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_38_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_38_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_39_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_39_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_39_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_39_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_39_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_39_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_39_V_d0() {
    buffer_1_0_39_V_d0 = in_V_data_V_dout.read().range(319, 312);
}

void AttentionMatmulReadB::thread_buffer_1_0_39_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_39_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_39_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_3_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_3_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_3_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_3_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_3_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_3_V_d0() {
    buffer_1_0_3_V_d0 = in_V_data_V_dout.read().range(31, 24);
}

void AttentionMatmulReadB::thread_buffer_1_0_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_3_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_3_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_40_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_40_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_40_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_40_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_40_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_40_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_40_V_d0() {
    buffer_1_0_40_V_d0 = in_V_data_V_dout.read().range(327, 320);
}

void AttentionMatmulReadB::thread_buffer_1_0_40_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_40_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_40_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_41_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_41_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_41_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_41_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_41_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_41_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_41_V_d0() {
    buffer_1_0_41_V_d0 = in_V_data_V_dout.read().range(335, 328);
}

void AttentionMatmulReadB::thread_buffer_1_0_41_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_41_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_41_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_42_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_42_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_42_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_42_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_42_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_42_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_42_V_d0() {
    buffer_1_0_42_V_d0 = in_V_data_V_dout.read().range(343, 336);
}

void AttentionMatmulReadB::thread_buffer_1_0_42_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_42_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_42_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_43_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_43_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_43_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_43_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_43_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_43_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_43_V_d0() {
    buffer_1_0_43_V_d0 = in_V_data_V_dout.read().range(351, 344);
}

void AttentionMatmulReadB::thread_buffer_1_0_43_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_43_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_43_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_44_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_44_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_44_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_44_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_44_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_44_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_44_V_d0() {
    buffer_1_0_44_V_d0 = in_V_data_V_dout.read().range(359, 352);
}

void AttentionMatmulReadB::thread_buffer_1_0_44_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_44_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_44_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_45_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_45_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_45_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_45_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_45_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_45_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_45_V_d0() {
    buffer_1_0_45_V_d0 = in_V_data_V_dout.read().range(367, 360);
}

void AttentionMatmulReadB::thread_buffer_1_0_45_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_45_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_45_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_46_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_46_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_46_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_46_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_46_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_46_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_46_V_d0() {
    buffer_1_0_46_V_d0 = in_V_data_V_dout.read().range(375, 368);
}

void AttentionMatmulReadB::thread_buffer_1_0_46_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_46_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_46_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_47_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_47_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_47_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_47_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_47_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_47_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_47_V_d0() {
    buffer_1_0_47_V_d0 = in_V_data_V_dout.read().range(383, 376);
}

void AttentionMatmulReadB::thread_buffer_1_0_47_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_47_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_47_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_48_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_48_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_48_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_48_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_48_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_48_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_48_V_d0() {
    buffer_1_0_48_V_d0 = in_V_data_V_dout.read().range(391, 384);
}

void AttentionMatmulReadB::thread_buffer_1_0_48_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_48_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_48_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_49_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_49_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_49_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_49_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_49_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_49_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_49_V_d0() {
    buffer_1_0_49_V_d0 = in_V_data_V_dout.read().range(399, 392);
}

void AttentionMatmulReadB::thread_buffer_1_0_49_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_49_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_49_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_4_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_4_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_4_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_4_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_4_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_4_V_d0() {
    buffer_1_0_4_V_d0 = in_V_data_V_dout.read().range(39, 32);
}

void AttentionMatmulReadB::thread_buffer_1_0_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_4_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_4_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_50_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_50_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_50_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_50_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_50_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_50_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_50_V_d0() {
    buffer_1_0_50_V_d0 = in_V_data_V_dout.read().range(407, 400);
}

void AttentionMatmulReadB::thread_buffer_1_0_50_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_50_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_50_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_51_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_51_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_51_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_51_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_51_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_51_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_51_V_d0() {
    buffer_1_0_51_V_d0 = in_V_data_V_dout.read().range(415, 408);
}

void AttentionMatmulReadB::thread_buffer_1_0_51_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_51_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_51_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_52_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_52_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_52_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_52_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_52_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_52_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_52_V_d0() {
    buffer_1_0_52_V_d0 = in_V_data_V_dout.read().range(423, 416);
}

void AttentionMatmulReadB::thread_buffer_1_0_52_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_52_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_52_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_53_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_53_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_53_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_53_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_53_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_53_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_53_V_d0() {
    buffer_1_0_53_V_d0 = in_V_data_V_dout.read().range(431, 424);
}

void AttentionMatmulReadB::thread_buffer_1_0_53_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_53_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_53_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_54_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_54_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_54_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_54_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_54_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_54_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_54_V_d0() {
    buffer_1_0_54_V_d0 = in_V_data_V_dout.read().range(439, 432);
}

void AttentionMatmulReadB::thread_buffer_1_0_54_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_54_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_54_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_55_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_55_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_55_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_55_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_55_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_55_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_55_V_d0() {
    buffer_1_0_55_V_d0 = in_V_data_V_dout.read().range(447, 440);
}

void AttentionMatmulReadB::thread_buffer_1_0_55_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_55_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_55_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_56_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_56_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_56_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_56_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_56_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_56_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_56_V_d0() {
    buffer_1_0_56_V_d0 = in_V_data_V_dout.read().range(455, 448);
}

void AttentionMatmulReadB::thread_buffer_1_0_56_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_56_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_56_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_57_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_57_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_57_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_57_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_57_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_57_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_57_V_d0() {
    buffer_1_0_57_V_d0 = in_V_data_V_dout.read().range(463, 456);
}

void AttentionMatmulReadB::thread_buffer_1_0_57_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_57_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_57_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_58_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_58_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_58_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_58_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_58_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_58_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_58_V_d0() {
    buffer_1_0_58_V_d0 = in_V_data_V_dout.read().range(471, 464);
}

void AttentionMatmulReadB::thread_buffer_1_0_58_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_58_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_58_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_59_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_59_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_59_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_59_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_59_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_59_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_59_V_d0() {
    buffer_1_0_59_V_d0 = in_V_data_V_dout.read().range(479, 472);
}

void AttentionMatmulReadB::thread_buffer_1_0_59_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_59_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_59_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_5_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_5_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_5_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_5_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_5_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_5_V_d0() {
    buffer_1_0_5_V_d0 = in_V_data_V_dout.read().range(47, 40);
}

void AttentionMatmulReadB::thread_buffer_1_0_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_5_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_5_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_60_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_60_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_60_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_60_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_60_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_60_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_60_V_d0() {
    buffer_1_0_60_V_d0 = in_V_data_V_dout.read().range(487, 480);
}

void AttentionMatmulReadB::thread_buffer_1_0_60_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_60_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_60_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_61_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_61_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_61_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_61_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_61_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_61_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_61_V_d0() {
    buffer_1_0_61_V_d0 = in_V_data_V_dout.read().range(495, 488);
}

void AttentionMatmulReadB::thread_buffer_1_0_61_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_61_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_61_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_62_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_62_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_62_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_62_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_62_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_62_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_62_V_d0() {
    buffer_1_0_62_V_d0 = in_V_data_V_dout.read().range(503, 496);
}

void AttentionMatmulReadB::thread_buffer_1_0_62_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_62_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_62_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_63_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_63_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_63_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_63_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_63_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_63_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_63_V_d0() {
    buffer_1_0_63_V_d0 = in_V_data_V_dout.read().range(511, 504);
}

void AttentionMatmulReadB::thread_buffer_1_0_63_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_63_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_63_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_6_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_6_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_6_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_6_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_6_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_6_V_d0() {
    buffer_1_0_6_V_d0 = in_V_data_V_dout.read().range(55, 48);
}

void AttentionMatmulReadB::thread_buffer_1_0_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_6_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_6_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_7_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_7_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_7_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_7_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_7_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_7_V_d0() {
    buffer_1_0_7_V_d0 = in_V_data_V_dout.read().range(63, 56);
}

void AttentionMatmulReadB::thread_buffer_1_0_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_7_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_7_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_8_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_8_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_8_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_8_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_8_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_8_V_d0() {
    buffer_1_0_8_V_d0 = in_V_data_V_dout.read().range(71, 64);
}

void AttentionMatmulReadB::thread_buffer_1_0_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_8_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_8_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_0_9_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_0_9_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_0_9_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_0_9_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_0_9_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_0_9_V_d0() {
    buffer_1_0_9_V_d0 = in_V_data_V_dout.read().range(79, 72);
}

void AttentionMatmulReadB::thread_buffer_1_0_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_0_9_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_0_9_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_0_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_0_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_0_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_0_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_0_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_0_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_0_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_10_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_10_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_10_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_10_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_10_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_10_V_d0() {
    buffer_1_1_10_V_d0 = in_V_data_V_dout.read().range(87, 80);
}

void AttentionMatmulReadB::thread_buffer_1_1_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_10_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_10_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_11_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_11_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_11_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_11_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_11_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_11_V_d0() {
    buffer_1_1_11_V_d0 = in_V_data_V_dout.read().range(95, 88);
}

void AttentionMatmulReadB::thread_buffer_1_1_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_11_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_11_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_12_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_12_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_12_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_12_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_12_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_12_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_12_V_d0() {
    buffer_1_1_12_V_d0 = in_V_data_V_dout.read().range(103, 96);
}

void AttentionMatmulReadB::thread_buffer_1_1_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_12_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_12_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_13_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_13_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_13_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_13_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_13_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_13_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_13_V_d0() {
    buffer_1_1_13_V_d0 = in_V_data_V_dout.read().range(111, 104);
}

void AttentionMatmulReadB::thread_buffer_1_1_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_13_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_13_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_14_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_14_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_14_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_14_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_14_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_14_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_14_V_d0() {
    buffer_1_1_14_V_d0 = in_V_data_V_dout.read().range(119, 112);
}

void AttentionMatmulReadB::thread_buffer_1_1_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_14_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_14_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_15_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_15_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_15_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_15_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_15_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_15_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_15_V_d0() {
    buffer_1_1_15_V_d0 = in_V_data_V_dout.read().range(127, 120);
}

void AttentionMatmulReadB::thread_buffer_1_1_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_15_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_15_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_16_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_16_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_16_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_16_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_16_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_16_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_16_V_d0() {
    buffer_1_1_16_V_d0 = in_V_data_V_dout.read().range(135, 128);
}

void AttentionMatmulReadB::thread_buffer_1_1_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_16_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_16_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_17_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_17_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_17_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_17_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_17_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_17_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_17_V_d0() {
    buffer_1_1_17_V_d0 = in_V_data_V_dout.read().range(143, 136);
}

void AttentionMatmulReadB::thread_buffer_1_1_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_17_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_17_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_18_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_18_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_18_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_18_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_18_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_18_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_18_V_d0() {
    buffer_1_1_18_V_d0 = in_V_data_V_dout.read().range(151, 144);
}

void AttentionMatmulReadB::thread_buffer_1_1_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_18_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_18_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_19_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_19_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_19_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_19_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_19_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_19_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_19_V_d0() {
    buffer_1_1_19_V_d0 = in_V_data_V_dout.read().range(159, 152);
}

void AttentionMatmulReadB::thread_buffer_1_1_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_19_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_19_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_1_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_1_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_1_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_1_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_1_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_1_V_d0() {
    buffer_1_1_1_V_d0 = in_V_data_V_dout.read().range(15, 8);
}

void AttentionMatmulReadB::thread_buffer_1_1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_1_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_1_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_20_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_20_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_20_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_20_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_20_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_20_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_20_V_d0() {
    buffer_1_1_20_V_d0 = in_V_data_V_dout.read().range(167, 160);
}

void AttentionMatmulReadB::thread_buffer_1_1_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_20_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_20_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_21_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_21_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_21_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_21_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_21_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_21_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_21_V_d0() {
    buffer_1_1_21_V_d0 = in_V_data_V_dout.read().range(175, 168);
}

void AttentionMatmulReadB::thread_buffer_1_1_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_21_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_21_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_22_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_22_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_22_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_22_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_22_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_22_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_22_V_d0() {
    buffer_1_1_22_V_d0 = in_V_data_V_dout.read().range(183, 176);
}

void AttentionMatmulReadB::thread_buffer_1_1_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_22_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_22_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_23_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_23_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_23_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_23_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_23_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_23_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_23_V_d0() {
    buffer_1_1_23_V_d0 = in_V_data_V_dout.read().range(191, 184);
}

void AttentionMatmulReadB::thread_buffer_1_1_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_23_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_23_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_24_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_24_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_24_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_24_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_24_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_24_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_24_V_d0() {
    buffer_1_1_24_V_d0 = in_V_data_V_dout.read().range(199, 192);
}

void AttentionMatmulReadB::thread_buffer_1_1_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_24_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_24_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_25_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_25_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_25_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_25_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_25_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_25_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_25_V_d0() {
    buffer_1_1_25_V_d0 = in_V_data_V_dout.read().range(207, 200);
}

void AttentionMatmulReadB::thread_buffer_1_1_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_25_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_25_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_26_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_26_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_26_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_26_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_26_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_26_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_26_V_d0() {
    buffer_1_1_26_V_d0 = in_V_data_V_dout.read().range(215, 208);
}

void AttentionMatmulReadB::thread_buffer_1_1_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_26_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_26_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_27_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_27_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_27_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_27_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_27_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_27_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_27_V_d0() {
    buffer_1_1_27_V_d0 = in_V_data_V_dout.read().range(223, 216);
}

void AttentionMatmulReadB::thread_buffer_1_1_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_27_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_27_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_28_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_28_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_28_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_28_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_28_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_28_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_28_V_d0() {
    buffer_1_1_28_V_d0 = in_V_data_V_dout.read().range(231, 224);
}

void AttentionMatmulReadB::thread_buffer_1_1_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_28_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_28_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_29_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_29_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_29_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_29_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_29_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_29_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_29_V_d0() {
    buffer_1_1_29_V_d0 = in_V_data_V_dout.read().range(239, 232);
}

void AttentionMatmulReadB::thread_buffer_1_1_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_29_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_29_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_2_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_2_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_2_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_2_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_2_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_2_V_d0() {
    buffer_1_1_2_V_d0 = in_V_data_V_dout.read().range(23, 16);
}

void AttentionMatmulReadB::thread_buffer_1_1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_2_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_2_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_30_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_30_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_30_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_30_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_30_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_30_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_30_V_d0() {
    buffer_1_1_30_V_d0 = in_V_data_V_dout.read().range(247, 240);
}

void AttentionMatmulReadB::thread_buffer_1_1_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_30_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_30_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_31_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_31_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_31_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_31_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_31_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_31_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_31_V_d0() {
    buffer_1_1_31_V_d0 = in_V_data_V_dout.read().range(255, 248);
}

void AttentionMatmulReadB::thread_buffer_1_1_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_31_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_31_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_32_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_32_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_32_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_32_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_32_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_32_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_32_V_d0() {
    buffer_1_1_32_V_d0 = in_V_data_V_dout.read().range(263, 256);
}

void AttentionMatmulReadB::thread_buffer_1_1_32_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_32_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_32_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_33_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_33_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_33_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_33_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_33_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_33_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_33_V_d0() {
    buffer_1_1_33_V_d0 = in_V_data_V_dout.read().range(271, 264);
}

void AttentionMatmulReadB::thread_buffer_1_1_33_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_33_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_33_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_34_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_34_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_34_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_34_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_34_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_34_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_34_V_d0() {
    buffer_1_1_34_V_d0 = in_V_data_V_dout.read().range(279, 272);
}

void AttentionMatmulReadB::thread_buffer_1_1_34_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_34_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_34_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_35_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_35_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_35_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_35_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_35_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_35_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_35_V_d0() {
    buffer_1_1_35_V_d0 = in_V_data_V_dout.read().range(287, 280);
}

void AttentionMatmulReadB::thread_buffer_1_1_35_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_35_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_35_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_36_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_36_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_36_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_36_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_36_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_36_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_36_V_d0() {
    buffer_1_1_36_V_d0 = in_V_data_V_dout.read().range(295, 288);
}

void AttentionMatmulReadB::thread_buffer_1_1_36_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_36_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_36_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_37_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_37_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_37_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_37_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_37_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_37_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_37_V_d0() {
    buffer_1_1_37_V_d0 = in_V_data_V_dout.read().range(303, 296);
}

void AttentionMatmulReadB::thread_buffer_1_1_37_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_37_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_37_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_38_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_38_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_38_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_38_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_38_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_38_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_38_V_d0() {
    buffer_1_1_38_V_d0 = in_V_data_V_dout.read().range(311, 304);
}

void AttentionMatmulReadB::thread_buffer_1_1_38_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_38_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_38_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_39_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_39_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_39_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_39_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_39_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_39_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_39_V_d0() {
    buffer_1_1_39_V_d0 = in_V_data_V_dout.read().range(319, 312);
}

void AttentionMatmulReadB::thread_buffer_1_1_39_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_39_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_39_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_3_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_3_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_3_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_3_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_3_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_3_V_d0() {
    buffer_1_1_3_V_d0 = in_V_data_V_dout.read().range(31, 24);
}

void AttentionMatmulReadB::thread_buffer_1_1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_3_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_3_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_40_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_40_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_40_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_40_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_40_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_40_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_40_V_d0() {
    buffer_1_1_40_V_d0 = in_V_data_V_dout.read().range(327, 320);
}

void AttentionMatmulReadB::thread_buffer_1_1_40_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_40_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_40_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_41_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_41_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_41_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_41_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_41_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_41_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_41_V_d0() {
    buffer_1_1_41_V_d0 = in_V_data_V_dout.read().range(335, 328);
}

void AttentionMatmulReadB::thread_buffer_1_1_41_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_41_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_41_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_42_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_42_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_42_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_42_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_42_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_42_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_42_V_d0() {
    buffer_1_1_42_V_d0 = in_V_data_V_dout.read().range(343, 336);
}

void AttentionMatmulReadB::thread_buffer_1_1_42_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_42_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_42_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_43_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_43_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_43_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_43_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_43_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_43_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_43_V_d0() {
    buffer_1_1_43_V_d0 = in_V_data_V_dout.read().range(351, 344);
}

void AttentionMatmulReadB::thread_buffer_1_1_43_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_43_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_43_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_44_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_44_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_44_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_44_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_44_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_44_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_44_V_d0() {
    buffer_1_1_44_V_d0 = in_V_data_V_dout.read().range(359, 352);
}

void AttentionMatmulReadB::thread_buffer_1_1_44_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_44_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_44_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_45_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_45_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_45_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_45_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_45_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_45_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_45_V_d0() {
    buffer_1_1_45_V_d0 = in_V_data_V_dout.read().range(367, 360);
}

void AttentionMatmulReadB::thread_buffer_1_1_45_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_45_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_45_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_46_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_46_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_46_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_46_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_46_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_46_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_46_V_d0() {
    buffer_1_1_46_V_d0 = in_V_data_V_dout.read().range(375, 368);
}

void AttentionMatmulReadB::thread_buffer_1_1_46_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_46_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_46_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_47_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_47_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_47_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_47_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_47_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_47_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_47_V_d0() {
    buffer_1_1_47_V_d0 = in_V_data_V_dout.read().range(383, 376);
}

void AttentionMatmulReadB::thread_buffer_1_1_47_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_47_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_47_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_48_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_48_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_48_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_48_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_48_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_48_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_48_V_d0() {
    buffer_1_1_48_V_d0 = in_V_data_V_dout.read().range(391, 384);
}

void AttentionMatmulReadB::thread_buffer_1_1_48_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_48_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_48_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_49_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_49_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_49_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_49_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_49_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_49_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_49_V_d0() {
    buffer_1_1_49_V_d0 = in_V_data_V_dout.read().range(399, 392);
}

void AttentionMatmulReadB::thread_buffer_1_1_49_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_49_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_49_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_4_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_4_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_4_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_4_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_4_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_4_V_d0() {
    buffer_1_1_4_V_d0 = in_V_data_V_dout.read().range(39, 32);
}

void AttentionMatmulReadB::thread_buffer_1_1_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_4_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_4_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_50_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_50_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_50_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_50_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_50_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_50_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_50_V_d0() {
    buffer_1_1_50_V_d0 = in_V_data_V_dout.read().range(407, 400);
}

void AttentionMatmulReadB::thread_buffer_1_1_50_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_50_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_50_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_51_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_51_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_51_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_51_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_51_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_51_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_51_V_d0() {
    buffer_1_1_51_V_d0 = in_V_data_V_dout.read().range(415, 408);
}

void AttentionMatmulReadB::thread_buffer_1_1_51_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_51_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_51_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_52_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_52_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_52_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_52_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_52_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_52_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_52_V_d0() {
    buffer_1_1_52_V_d0 = in_V_data_V_dout.read().range(423, 416);
}

void AttentionMatmulReadB::thread_buffer_1_1_52_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_52_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_52_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_53_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_53_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_53_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_53_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_53_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_53_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_53_V_d0() {
    buffer_1_1_53_V_d0 = in_V_data_V_dout.read().range(431, 424);
}

void AttentionMatmulReadB::thread_buffer_1_1_53_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_53_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_53_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_54_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_54_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_54_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_54_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_54_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_54_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_54_V_d0() {
    buffer_1_1_54_V_d0 = in_V_data_V_dout.read().range(439, 432);
}

void AttentionMatmulReadB::thread_buffer_1_1_54_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_54_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_54_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_55_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_55_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_55_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_55_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_55_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_55_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_55_V_d0() {
    buffer_1_1_55_V_d0 = in_V_data_V_dout.read().range(447, 440);
}

void AttentionMatmulReadB::thread_buffer_1_1_55_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_55_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_55_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_56_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_56_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_56_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_56_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_56_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_56_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_56_V_d0() {
    buffer_1_1_56_V_d0 = in_V_data_V_dout.read().range(455, 448);
}

void AttentionMatmulReadB::thread_buffer_1_1_56_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_56_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_56_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_57_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_57_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_57_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_57_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_57_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_57_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_57_V_d0() {
    buffer_1_1_57_V_d0 = in_V_data_V_dout.read().range(463, 456);
}

void AttentionMatmulReadB::thread_buffer_1_1_57_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_57_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_57_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_58_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_58_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_58_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_58_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_58_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_58_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_58_V_d0() {
    buffer_1_1_58_V_d0 = in_V_data_V_dout.read().range(471, 464);
}

void AttentionMatmulReadB::thread_buffer_1_1_58_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_58_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_58_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_59_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_59_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_59_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_59_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_59_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_59_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_59_V_d0() {
    buffer_1_1_59_V_d0 = in_V_data_V_dout.read().range(479, 472);
}

void AttentionMatmulReadB::thread_buffer_1_1_59_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_59_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_59_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_5_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_5_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_5_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_5_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_5_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_5_V_d0() {
    buffer_1_1_5_V_d0 = in_V_data_V_dout.read().range(47, 40);
}

void AttentionMatmulReadB::thread_buffer_1_1_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_5_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_5_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_60_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_60_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_60_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_60_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_60_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_60_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_60_V_d0() {
    buffer_1_1_60_V_d0 = in_V_data_V_dout.read().range(487, 480);
}

void AttentionMatmulReadB::thread_buffer_1_1_60_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_60_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_60_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_61_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_61_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_61_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_61_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_61_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_61_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_61_V_d0() {
    buffer_1_1_61_V_d0 = in_V_data_V_dout.read().range(495, 488);
}

void AttentionMatmulReadB::thread_buffer_1_1_61_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_61_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_61_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_62_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_62_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_62_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_62_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_62_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_62_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_62_V_d0() {
    buffer_1_1_62_V_d0 = in_V_data_V_dout.read().range(503, 496);
}

void AttentionMatmulReadB::thread_buffer_1_1_62_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_62_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_62_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_63_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_63_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_63_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_63_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_63_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_63_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_63_V_d0() {
    buffer_1_1_63_V_d0 = in_V_data_V_dout.read().range(511, 504);
}

void AttentionMatmulReadB::thread_buffer_1_1_63_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_63_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_63_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_6_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_6_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_6_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_6_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_6_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_6_V_d0() {
    buffer_1_1_6_V_d0 = in_V_data_V_dout.read().range(55, 48);
}

void AttentionMatmulReadB::thread_buffer_1_1_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_6_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_6_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_7_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_7_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_7_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_7_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_7_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_7_V_d0() {
    buffer_1_1_7_V_d0 = in_V_data_V_dout.read().range(63, 56);
}

void AttentionMatmulReadB::thread_buffer_1_1_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_7_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_7_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_8_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_8_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_8_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_8_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_8_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_8_V_d0() {
    buffer_1_1_8_V_d0 = in_V_data_V_dout.read().range(71, 64);
}

void AttentionMatmulReadB::thread_buffer_1_1_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_8_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_8_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_1_1_9_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_1_1_9_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_1_1_9_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_1_1_9_V_ce0 = ap_const_logic_1;
    } else {
        buffer_1_1_9_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_1_1_9_V_d0() {
    buffer_1_1_9_V_d0 = in_V_data_V_dout.read().range(79, 72);
}

void AttentionMatmulReadB::thread_buffer_1_1_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_1_1_9_V_we0 = ap_const_logic_1;
    } else {
        buffer_1_1_9_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_0_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_0_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_0_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_0_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_0_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_0_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_0_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_10_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_10_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_10_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_10_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_10_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_10_V_d0() {
    buffer_2_0_10_V_d0 = in_V_data_V_dout.read().range(87, 80);
}

void AttentionMatmulReadB::thread_buffer_2_0_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_10_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_10_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_11_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_11_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_11_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_11_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_11_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_11_V_d0() {
    buffer_2_0_11_V_d0 = in_V_data_V_dout.read().range(95, 88);
}

void AttentionMatmulReadB::thread_buffer_2_0_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_11_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_11_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_12_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_12_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_12_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_12_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_12_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_12_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_12_V_d0() {
    buffer_2_0_12_V_d0 = in_V_data_V_dout.read().range(103, 96);
}

void AttentionMatmulReadB::thread_buffer_2_0_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_12_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_12_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_13_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_13_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_13_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_13_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_13_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_13_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_13_V_d0() {
    buffer_2_0_13_V_d0 = in_V_data_V_dout.read().range(111, 104);
}

void AttentionMatmulReadB::thread_buffer_2_0_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_13_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_13_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_14_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_14_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_14_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_14_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_14_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_14_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_14_V_d0() {
    buffer_2_0_14_V_d0 = in_V_data_V_dout.read().range(119, 112);
}

void AttentionMatmulReadB::thread_buffer_2_0_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_14_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_14_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_15_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_15_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_15_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_15_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_15_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_15_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_15_V_d0() {
    buffer_2_0_15_V_d0 = in_V_data_V_dout.read().range(127, 120);
}

void AttentionMatmulReadB::thread_buffer_2_0_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_15_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_15_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_16_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_16_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_16_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_16_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_16_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_16_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_16_V_d0() {
    buffer_2_0_16_V_d0 = in_V_data_V_dout.read().range(135, 128);
}

void AttentionMatmulReadB::thread_buffer_2_0_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_16_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_16_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_17_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_17_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_17_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_17_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_17_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_17_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_17_V_d0() {
    buffer_2_0_17_V_d0 = in_V_data_V_dout.read().range(143, 136);
}

void AttentionMatmulReadB::thread_buffer_2_0_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_17_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_17_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_18_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_18_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_18_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_18_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_18_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_18_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_18_V_d0() {
    buffer_2_0_18_V_d0 = in_V_data_V_dout.read().range(151, 144);
}

void AttentionMatmulReadB::thread_buffer_2_0_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_18_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_18_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_19_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_19_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_19_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_19_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_19_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_19_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_19_V_d0() {
    buffer_2_0_19_V_d0 = in_V_data_V_dout.read().range(159, 152);
}

void AttentionMatmulReadB::thread_buffer_2_0_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_19_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_19_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_1_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_1_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_1_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_1_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_1_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_1_V_d0() {
    buffer_2_0_1_V_d0 = in_V_data_V_dout.read().range(15, 8);
}

void AttentionMatmulReadB::thread_buffer_2_0_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_1_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_1_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_20_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_20_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_20_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_20_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_20_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_20_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_20_V_d0() {
    buffer_2_0_20_V_d0 = in_V_data_V_dout.read().range(167, 160);
}

void AttentionMatmulReadB::thread_buffer_2_0_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_20_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_20_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_21_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_21_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_21_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_21_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_21_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_21_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_21_V_d0() {
    buffer_2_0_21_V_d0 = in_V_data_V_dout.read().range(175, 168);
}

void AttentionMatmulReadB::thread_buffer_2_0_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_21_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_21_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_22_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_22_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_22_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_22_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_22_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_22_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_22_V_d0() {
    buffer_2_0_22_V_d0 = in_V_data_V_dout.read().range(183, 176);
}

void AttentionMatmulReadB::thread_buffer_2_0_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_22_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_22_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_23_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_23_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_23_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_23_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_23_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_23_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_23_V_d0() {
    buffer_2_0_23_V_d0 = in_V_data_V_dout.read().range(191, 184);
}

void AttentionMatmulReadB::thread_buffer_2_0_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_23_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_23_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_24_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_24_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_24_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_24_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_24_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_24_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_24_V_d0() {
    buffer_2_0_24_V_d0 = in_V_data_V_dout.read().range(199, 192);
}

void AttentionMatmulReadB::thread_buffer_2_0_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_24_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_24_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_25_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_25_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_25_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_25_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_25_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_25_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_25_V_d0() {
    buffer_2_0_25_V_d0 = in_V_data_V_dout.read().range(207, 200);
}

void AttentionMatmulReadB::thread_buffer_2_0_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_25_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_25_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_26_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_26_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_26_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_26_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_26_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_26_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_26_V_d0() {
    buffer_2_0_26_V_d0 = in_V_data_V_dout.read().range(215, 208);
}

void AttentionMatmulReadB::thread_buffer_2_0_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_26_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_26_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_27_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_27_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_27_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_27_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_27_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_27_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_27_V_d0() {
    buffer_2_0_27_V_d0 = in_V_data_V_dout.read().range(223, 216);
}

void AttentionMatmulReadB::thread_buffer_2_0_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_27_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_27_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_28_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_28_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_28_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_28_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_28_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_28_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_28_V_d0() {
    buffer_2_0_28_V_d0 = in_V_data_V_dout.read().range(231, 224);
}

void AttentionMatmulReadB::thread_buffer_2_0_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_28_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_28_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_29_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_29_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_29_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_29_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_29_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_29_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_29_V_d0() {
    buffer_2_0_29_V_d0 = in_V_data_V_dout.read().range(239, 232);
}

void AttentionMatmulReadB::thread_buffer_2_0_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_29_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_29_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_2_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_2_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_2_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_2_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_2_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_2_V_d0() {
    buffer_2_0_2_V_d0 = in_V_data_V_dout.read().range(23, 16);
}

void AttentionMatmulReadB::thread_buffer_2_0_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_2_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_2_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_30_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_30_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_30_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_30_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_30_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_30_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_30_V_d0() {
    buffer_2_0_30_V_d0 = in_V_data_V_dout.read().range(247, 240);
}

void AttentionMatmulReadB::thread_buffer_2_0_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_30_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_30_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_31_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_31_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_31_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_31_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_31_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_31_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_31_V_d0() {
    buffer_2_0_31_V_d0 = in_V_data_V_dout.read().range(255, 248);
}

void AttentionMatmulReadB::thread_buffer_2_0_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_31_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_31_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_32_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_32_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_32_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_32_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_32_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_32_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_32_V_d0() {
    buffer_2_0_32_V_d0 = in_V_data_V_dout.read().range(263, 256);
}

void AttentionMatmulReadB::thread_buffer_2_0_32_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_32_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_32_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_33_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_33_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_33_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_33_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_33_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_33_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_33_V_d0() {
    buffer_2_0_33_V_d0 = in_V_data_V_dout.read().range(271, 264);
}

void AttentionMatmulReadB::thread_buffer_2_0_33_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_33_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_33_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_34_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_34_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_34_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_34_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_34_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_34_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_34_V_d0() {
    buffer_2_0_34_V_d0 = in_V_data_V_dout.read().range(279, 272);
}

void AttentionMatmulReadB::thread_buffer_2_0_34_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_34_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_34_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_35_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_35_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_35_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_35_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_35_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_35_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_35_V_d0() {
    buffer_2_0_35_V_d0 = in_V_data_V_dout.read().range(287, 280);
}

void AttentionMatmulReadB::thread_buffer_2_0_35_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_35_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_35_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_36_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_36_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_36_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_36_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_36_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_36_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_36_V_d0() {
    buffer_2_0_36_V_d0 = in_V_data_V_dout.read().range(295, 288);
}

void AttentionMatmulReadB::thread_buffer_2_0_36_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_36_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_36_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_37_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_37_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_37_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_37_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_37_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_37_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_37_V_d0() {
    buffer_2_0_37_V_d0 = in_V_data_V_dout.read().range(303, 296);
}

void AttentionMatmulReadB::thread_buffer_2_0_37_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_37_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_37_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_38_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_38_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_38_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_38_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_38_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_38_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_38_V_d0() {
    buffer_2_0_38_V_d0 = in_V_data_V_dout.read().range(311, 304);
}

void AttentionMatmulReadB::thread_buffer_2_0_38_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_38_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_38_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_39_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_39_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_39_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_39_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_39_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_39_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_39_V_d0() {
    buffer_2_0_39_V_d0 = in_V_data_V_dout.read().range(319, 312);
}

void AttentionMatmulReadB::thread_buffer_2_0_39_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_39_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_39_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_3_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_3_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_3_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_3_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_3_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_3_V_d0() {
    buffer_2_0_3_V_d0 = in_V_data_V_dout.read().range(31, 24);
}

void AttentionMatmulReadB::thread_buffer_2_0_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_3_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_3_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_40_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_40_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_40_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_40_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_40_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_40_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_40_V_d0() {
    buffer_2_0_40_V_d0 = in_V_data_V_dout.read().range(327, 320);
}

void AttentionMatmulReadB::thread_buffer_2_0_40_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_40_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_40_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_41_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_41_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_41_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_41_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_41_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_41_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_41_V_d0() {
    buffer_2_0_41_V_d0 = in_V_data_V_dout.read().range(335, 328);
}

void AttentionMatmulReadB::thread_buffer_2_0_41_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_41_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_41_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_42_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_42_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_42_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_42_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_42_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_42_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_42_V_d0() {
    buffer_2_0_42_V_d0 = in_V_data_V_dout.read().range(343, 336);
}

void AttentionMatmulReadB::thread_buffer_2_0_42_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_42_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_42_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_43_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_43_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_43_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_43_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_43_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_43_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_43_V_d0() {
    buffer_2_0_43_V_d0 = in_V_data_V_dout.read().range(351, 344);
}

void AttentionMatmulReadB::thread_buffer_2_0_43_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_43_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_43_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_44_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_44_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_44_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_44_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_44_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_44_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_44_V_d0() {
    buffer_2_0_44_V_d0 = in_V_data_V_dout.read().range(359, 352);
}

void AttentionMatmulReadB::thread_buffer_2_0_44_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_44_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_44_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_45_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_45_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_45_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_45_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_45_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_45_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_45_V_d0() {
    buffer_2_0_45_V_d0 = in_V_data_V_dout.read().range(367, 360);
}

void AttentionMatmulReadB::thread_buffer_2_0_45_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_45_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_45_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_46_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_46_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_46_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_46_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_46_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_46_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_46_V_d0() {
    buffer_2_0_46_V_d0 = in_V_data_V_dout.read().range(375, 368);
}

void AttentionMatmulReadB::thread_buffer_2_0_46_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_46_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_46_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_47_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_47_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_47_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_47_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_47_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_47_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_47_V_d0() {
    buffer_2_0_47_V_d0 = in_V_data_V_dout.read().range(383, 376);
}

void AttentionMatmulReadB::thread_buffer_2_0_47_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_47_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_47_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_48_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_48_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_48_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_48_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_48_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_48_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_48_V_d0() {
    buffer_2_0_48_V_d0 = in_V_data_V_dout.read().range(391, 384);
}

void AttentionMatmulReadB::thread_buffer_2_0_48_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_48_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_48_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_49_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_49_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_49_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_49_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_49_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_49_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_49_V_d0() {
    buffer_2_0_49_V_d0 = in_V_data_V_dout.read().range(399, 392);
}

void AttentionMatmulReadB::thread_buffer_2_0_49_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_49_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_49_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_4_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_4_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_4_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_4_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_4_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_4_V_d0() {
    buffer_2_0_4_V_d0 = in_V_data_V_dout.read().range(39, 32);
}

void AttentionMatmulReadB::thread_buffer_2_0_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_4_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_4_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_50_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_50_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_50_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_50_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_50_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_50_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_50_V_d0() {
    buffer_2_0_50_V_d0 = in_V_data_V_dout.read().range(407, 400);
}

void AttentionMatmulReadB::thread_buffer_2_0_50_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_50_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_50_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_51_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_51_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_51_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_51_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_51_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_51_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_51_V_d0() {
    buffer_2_0_51_V_d0 = in_V_data_V_dout.read().range(415, 408);
}

void AttentionMatmulReadB::thread_buffer_2_0_51_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_51_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_51_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_52_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_52_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_52_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_52_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_52_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_52_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_52_V_d0() {
    buffer_2_0_52_V_d0 = in_V_data_V_dout.read().range(423, 416);
}

void AttentionMatmulReadB::thread_buffer_2_0_52_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_52_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_52_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_53_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_53_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_53_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_53_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_53_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_53_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_53_V_d0() {
    buffer_2_0_53_V_d0 = in_V_data_V_dout.read().range(431, 424);
}

void AttentionMatmulReadB::thread_buffer_2_0_53_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_53_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_53_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_54_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_54_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_54_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_54_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_54_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_54_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_54_V_d0() {
    buffer_2_0_54_V_d0 = in_V_data_V_dout.read().range(439, 432);
}

void AttentionMatmulReadB::thread_buffer_2_0_54_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_54_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_54_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_55_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_55_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_55_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_55_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_55_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_55_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_55_V_d0() {
    buffer_2_0_55_V_d0 = in_V_data_V_dout.read().range(447, 440);
}

void AttentionMatmulReadB::thread_buffer_2_0_55_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_55_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_55_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_56_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_56_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_56_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_56_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_56_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_56_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_56_V_d0() {
    buffer_2_0_56_V_d0 = in_V_data_V_dout.read().range(455, 448);
}

void AttentionMatmulReadB::thread_buffer_2_0_56_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_56_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_56_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_57_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_57_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_57_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_57_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_57_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_57_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_57_V_d0() {
    buffer_2_0_57_V_d0 = in_V_data_V_dout.read().range(463, 456);
}

void AttentionMatmulReadB::thread_buffer_2_0_57_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_57_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_57_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_58_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_58_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_58_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_58_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_58_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_58_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_58_V_d0() {
    buffer_2_0_58_V_d0 = in_V_data_V_dout.read().range(471, 464);
}

void AttentionMatmulReadB::thread_buffer_2_0_58_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_58_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_58_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_59_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_59_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_59_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_59_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_59_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_59_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_59_V_d0() {
    buffer_2_0_59_V_d0 = in_V_data_V_dout.read().range(479, 472);
}

void AttentionMatmulReadB::thread_buffer_2_0_59_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_59_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_59_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_5_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_5_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_5_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_5_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_5_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_5_V_d0() {
    buffer_2_0_5_V_d0 = in_V_data_V_dout.read().range(47, 40);
}

void AttentionMatmulReadB::thread_buffer_2_0_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_5_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_5_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_60_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_60_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_60_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_60_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_60_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_60_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_60_V_d0() {
    buffer_2_0_60_V_d0 = in_V_data_V_dout.read().range(487, 480);
}

void AttentionMatmulReadB::thread_buffer_2_0_60_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_60_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_60_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_61_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_61_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_61_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_61_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_61_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_61_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_61_V_d0() {
    buffer_2_0_61_V_d0 = in_V_data_V_dout.read().range(495, 488);
}

void AttentionMatmulReadB::thread_buffer_2_0_61_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_61_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_61_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_62_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_62_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_62_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_62_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_62_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_62_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_62_V_d0() {
    buffer_2_0_62_V_d0 = in_V_data_V_dout.read().range(503, 496);
}

void AttentionMatmulReadB::thread_buffer_2_0_62_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_62_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_62_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_63_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_63_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_63_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_63_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_63_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_63_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_63_V_d0() {
    buffer_2_0_63_V_d0 = in_V_data_V_dout.read().range(511, 504);
}

void AttentionMatmulReadB::thread_buffer_2_0_63_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_63_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_63_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_6_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_6_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_6_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_6_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_6_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_6_V_d0() {
    buffer_2_0_6_V_d0 = in_V_data_V_dout.read().range(55, 48);
}

void AttentionMatmulReadB::thread_buffer_2_0_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_6_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_6_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_7_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_7_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_7_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_7_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_7_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_7_V_d0() {
    buffer_2_0_7_V_d0 = in_V_data_V_dout.read().range(63, 56);
}

void AttentionMatmulReadB::thread_buffer_2_0_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_7_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_7_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_8_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_8_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_8_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_8_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_8_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_8_V_d0() {
    buffer_2_0_8_V_d0 = in_V_data_V_dout.read().range(71, 64);
}

void AttentionMatmulReadB::thread_buffer_2_0_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_8_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_8_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_0_9_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_0_9_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_0_9_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_0_9_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_0_9_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_0_9_V_d0() {
    buffer_2_0_9_V_d0 = in_V_data_V_dout.read().range(79, 72);
}

void AttentionMatmulReadB::thread_buffer_2_0_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_reg_26436.read()) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_0_9_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_0_9_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_0_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_0_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_0_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_0_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_0_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_0_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_0_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_10_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_10_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_10_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_10_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_10_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_10_V_d0() {
    buffer_2_1_10_V_d0 = in_V_data_V_dout.read().range(87, 80);
}

void AttentionMatmulReadB::thread_buffer_2_1_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_10_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_10_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_11_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_11_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_11_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_11_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_11_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_11_V_d0() {
    buffer_2_1_11_V_d0 = in_V_data_V_dout.read().range(95, 88);
}

void AttentionMatmulReadB::thread_buffer_2_1_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_11_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_11_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_12_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_12_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_12_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_12_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_12_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_12_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_12_V_d0() {
    buffer_2_1_12_V_d0 = in_V_data_V_dout.read().range(103, 96);
}

void AttentionMatmulReadB::thread_buffer_2_1_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_12_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_12_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_13_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_13_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_13_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_13_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_13_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_13_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_13_V_d0() {
    buffer_2_1_13_V_d0 = in_V_data_V_dout.read().range(111, 104);
}

void AttentionMatmulReadB::thread_buffer_2_1_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_13_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_13_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_14_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_14_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_14_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_14_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_14_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_14_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_14_V_d0() {
    buffer_2_1_14_V_d0 = in_V_data_V_dout.read().range(119, 112);
}

void AttentionMatmulReadB::thread_buffer_2_1_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_14_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_14_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_15_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_15_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_15_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_15_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_15_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_15_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_15_V_d0() {
    buffer_2_1_15_V_d0 = in_V_data_V_dout.read().range(127, 120);
}

void AttentionMatmulReadB::thread_buffer_2_1_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_15_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_15_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_16_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_16_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_16_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_16_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_16_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_16_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_16_V_d0() {
    buffer_2_1_16_V_d0 = in_V_data_V_dout.read().range(135, 128);
}

void AttentionMatmulReadB::thread_buffer_2_1_16_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_16_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_16_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_17_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_17_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_17_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_17_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_17_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_17_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_17_V_d0() {
    buffer_2_1_17_V_d0 = in_V_data_V_dout.read().range(143, 136);
}

void AttentionMatmulReadB::thread_buffer_2_1_17_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_17_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_17_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_18_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_18_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_18_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_18_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_18_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_18_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_18_V_d0() {
    buffer_2_1_18_V_d0 = in_V_data_V_dout.read().range(151, 144);
}

void AttentionMatmulReadB::thread_buffer_2_1_18_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_18_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_18_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_19_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_19_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_19_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_19_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_19_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_19_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_19_V_d0() {
    buffer_2_1_19_V_d0 = in_V_data_V_dout.read().range(159, 152);
}

void AttentionMatmulReadB::thread_buffer_2_1_19_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_19_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_19_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_1_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_1_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_1_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_1_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_1_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_1_V_d0() {
    buffer_2_1_1_V_d0 = in_V_data_V_dout.read().range(15, 8);
}

void AttentionMatmulReadB::thread_buffer_2_1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_1_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_1_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_20_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_20_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_20_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_20_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_20_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_20_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_20_V_d0() {
    buffer_2_1_20_V_d0 = in_V_data_V_dout.read().range(167, 160);
}

void AttentionMatmulReadB::thread_buffer_2_1_20_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_20_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_20_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_21_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_21_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_21_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_21_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_21_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_21_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_21_V_d0() {
    buffer_2_1_21_V_d0 = in_V_data_V_dout.read().range(175, 168);
}

void AttentionMatmulReadB::thread_buffer_2_1_21_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_21_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_21_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_22_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_22_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_22_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_22_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_22_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_22_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_22_V_d0() {
    buffer_2_1_22_V_d0 = in_V_data_V_dout.read().range(183, 176);
}

void AttentionMatmulReadB::thread_buffer_2_1_22_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_22_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_22_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_23_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_23_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_23_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_23_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_23_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_23_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_23_V_d0() {
    buffer_2_1_23_V_d0 = in_V_data_V_dout.read().range(191, 184);
}

void AttentionMatmulReadB::thread_buffer_2_1_23_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_23_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_23_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_24_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_24_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_24_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_24_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_24_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_24_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_24_V_d0() {
    buffer_2_1_24_V_d0 = in_V_data_V_dout.read().range(199, 192);
}

void AttentionMatmulReadB::thread_buffer_2_1_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_24_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_24_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_25_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_25_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_25_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_25_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_25_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_25_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_25_V_d0() {
    buffer_2_1_25_V_d0 = in_V_data_V_dout.read().range(207, 200);
}

void AttentionMatmulReadB::thread_buffer_2_1_25_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_25_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_25_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_26_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_26_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_26_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_26_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_26_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_26_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_26_V_d0() {
    buffer_2_1_26_V_d0 = in_V_data_V_dout.read().range(215, 208);
}

void AttentionMatmulReadB::thread_buffer_2_1_26_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_26_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_26_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_27_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_27_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_27_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_27_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_27_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_27_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_27_V_d0() {
    buffer_2_1_27_V_d0 = in_V_data_V_dout.read().range(223, 216);
}

void AttentionMatmulReadB::thread_buffer_2_1_27_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_27_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_27_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_28_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_28_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_28_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_28_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_28_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_28_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_28_V_d0() {
    buffer_2_1_28_V_d0 = in_V_data_V_dout.read().range(231, 224);
}

void AttentionMatmulReadB::thread_buffer_2_1_28_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_28_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_28_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_29_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_29_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_29_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_29_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_29_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_29_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_29_V_d0() {
    buffer_2_1_29_V_d0 = in_V_data_V_dout.read().range(239, 232);
}

void AttentionMatmulReadB::thread_buffer_2_1_29_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_29_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_29_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_2_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_2_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_2_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_2_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_2_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_2_V_d0() {
    buffer_2_1_2_V_d0 = in_V_data_V_dout.read().range(23, 16);
}

void AttentionMatmulReadB::thread_buffer_2_1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_2_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_2_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_30_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_30_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_30_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_30_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_30_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_30_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_30_V_d0() {
    buffer_2_1_30_V_d0 = in_V_data_V_dout.read().range(247, 240);
}

void AttentionMatmulReadB::thread_buffer_2_1_30_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_30_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_30_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_31_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_31_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_31_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_31_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_31_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_31_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_31_V_d0() {
    buffer_2_1_31_V_d0 = in_V_data_V_dout.read().range(255, 248);
}

void AttentionMatmulReadB::thread_buffer_2_1_31_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_31_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_31_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_32_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_32_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_32_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_32_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_32_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_32_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_32_V_d0() {
    buffer_2_1_32_V_d0 = in_V_data_V_dout.read().range(263, 256);
}

void AttentionMatmulReadB::thread_buffer_2_1_32_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_32_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_32_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_33_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_33_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_33_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_33_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_33_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_33_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_33_V_d0() {
    buffer_2_1_33_V_d0 = in_V_data_V_dout.read().range(271, 264);
}

void AttentionMatmulReadB::thread_buffer_2_1_33_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_33_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_33_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_34_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_34_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_34_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_34_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_34_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_34_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_34_V_d0() {
    buffer_2_1_34_V_d0 = in_V_data_V_dout.read().range(279, 272);
}

void AttentionMatmulReadB::thread_buffer_2_1_34_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_34_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_34_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_35_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_35_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_35_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_35_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_35_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_35_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_35_V_d0() {
    buffer_2_1_35_V_d0 = in_V_data_V_dout.read().range(287, 280);
}

void AttentionMatmulReadB::thread_buffer_2_1_35_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_35_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_35_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_36_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_36_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_36_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_36_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_36_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_36_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_36_V_d0() {
    buffer_2_1_36_V_d0 = in_V_data_V_dout.read().range(295, 288);
}

void AttentionMatmulReadB::thread_buffer_2_1_36_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_36_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_36_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_37_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_37_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_37_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_37_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_37_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_37_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_37_V_d0() {
    buffer_2_1_37_V_d0 = in_V_data_V_dout.read().range(303, 296);
}

void AttentionMatmulReadB::thread_buffer_2_1_37_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_37_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_37_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_38_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_38_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_38_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_38_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_38_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_38_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_38_V_d0() {
    buffer_2_1_38_V_d0 = in_V_data_V_dout.read().range(311, 304);
}

void AttentionMatmulReadB::thread_buffer_2_1_38_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_38_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_38_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_39_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_39_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_39_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_39_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_39_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_39_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_39_V_d0() {
    buffer_2_1_39_V_d0 = in_V_data_V_dout.read().range(319, 312);
}

void AttentionMatmulReadB::thread_buffer_2_1_39_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_39_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_39_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_3_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_3_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_3_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_3_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_3_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_3_V_d0() {
    buffer_2_1_3_V_d0 = in_V_data_V_dout.read().range(31, 24);
}

void AttentionMatmulReadB::thread_buffer_2_1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_3_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_3_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_40_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_40_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_40_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_40_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_40_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_40_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_40_V_d0() {
    buffer_2_1_40_V_d0 = in_V_data_V_dout.read().range(327, 320);
}

void AttentionMatmulReadB::thread_buffer_2_1_40_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_40_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_40_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_41_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_41_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_41_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_41_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_41_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_41_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_41_V_d0() {
    buffer_2_1_41_V_d0 = in_V_data_V_dout.read().range(335, 328);
}

void AttentionMatmulReadB::thread_buffer_2_1_41_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_41_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_41_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_42_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_42_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_42_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_42_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_42_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_42_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_42_V_d0() {
    buffer_2_1_42_V_d0 = in_V_data_V_dout.read().range(343, 336);
}

void AttentionMatmulReadB::thread_buffer_2_1_42_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_42_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_42_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_43_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_43_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_43_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_43_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_43_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_43_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_43_V_d0() {
    buffer_2_1_43_V_d0 = in_V_data_V_dout.read().range(351, 344);
}

void AttentionMatmulReadB::thread_buffer_2_1_43_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_43_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_43_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_44_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_44_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_44_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_44_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_44_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_44_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_44_V_d0() {
    buffer_2_1_44_V_d0 = in_V_data_V_dout.read().range(359, 352);
}

void AttentionMatmulReadB::thread_buffer_2_1_44_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_44_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_44_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_45_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_45_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_45_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_45_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_45_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_45_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_45_V_d0() {
    buffer_2_1_45_V_d0 = in_V_data_V_dout.read().range(367, 360);
}

void AttentionMatmulReadB::thread_buffer_2_1_45_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_45_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_45_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_46_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_46_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_46_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_46_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_46_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_46_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_46_V_d0() {
    buffer_2_1_46_V_d0 = in_V_data_V_dout.read().range(375, 368);
}

void AttentionMatmulReadB::thread_buffer_2_1_46_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_46_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_46_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_47_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_47_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_47_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_47_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_47_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_47_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_47_V_d0() {
    buffer_2_1_47_V_d0 = in_V_data_V_dout.read().range(383, 376);
}

void AttentionMatmulReadB::thread_buffer_2_1_47_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_47_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_47_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_48_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_48_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_48_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_48_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_48_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_48_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_48_V_d0() {
    buffer_2_1_48_V_d0 = in_V_data_V_dout.read().range(391, 384);
}

void AttentionMatmulReadB::thread_buffer_2_1_48_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_48_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_48_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_49_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_49_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_49_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_49_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_49_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_49_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_49_V_d0() {
    buffer_2_1_49_V_d0 = in_V_data_V_dout.read().range(399, 392);
}

void AttentionMatmulReadB::thread_buffer_2_1_49_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_49_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_49_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_4_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_4_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_4_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_4_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_4_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_4_V_d0() {
    buffer_2_1_4_V_d0 = in_V_data_V_dout.read().range(39, 32);
}

void AttentionMatmulReadB::thread_buffer_2_1_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_4_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_4_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_50_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_50_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_50_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_50_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_50_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_50_V_ce0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_50_V_d0() {
    buffer_2_1_50_V_d0 = in_V_data_V_dout.read().range(407, 400);
}

void AttentionMatmulReadB::thread_buffer_2_1_50_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_16_reg_26436.read(), ap_const_lv1_1) && 
         esl_seteq<1,2,2>(ret_V_10_t_reg_26432.read(), ap_const_lv2_2) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        buffer_2_1_50_V_we0 = ap_const_logic_1;
    } else {
        buffer_2_1_50_V_we0 = ap_const_logic_0;
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_51_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        buffer_2_1_51_V_address0 =  (sc_lv<4>) (tmp_1_fu_25873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        buffer_2_1_51_V_address0 =  (sc_lv<4>) (tmp_8_fu_23656_p1.read());
    } else {
        buffer_2_1_51_V_address0 = "XXXX";
    }
}

void AttentionMatmulReadB::thread_buffer_2_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        buffer_2_1_51_V_ce0 = ap_const_logic_1;
    } else {
        buffer_2_1_51_V_ce0 = ap_const_logic_0;
    }
}

}

