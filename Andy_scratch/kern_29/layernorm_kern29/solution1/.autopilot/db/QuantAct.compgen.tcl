# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 292
set hasByteEnable 0
set MemName QuantAct_m_0
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1001101110001011000101101011001" "1011110010010110100000010001111" "1010010001110100101001011001010" "1010000010101110111000100100010" "1010110000000101011001100111000" "1001110001010111011011011001110" "1010100110100111001101000011011" "1011001011010001011101010101011" "1010000101101111110001000100011" "1011011100100011101111000101110" "1001110010111110111011110010111" "1100001111010110011000010010000" "1001101010100101100111011010101" "1010110111110010011110100001100" "1011101110000101001000100111000" "1010101111110010010110001000111" "1010010101111011000001100111000" "1001010001111111100100010011010" "1010011011100000110100111100011" "1011000110101100111110011010011" "1010110000011010111000101101000" "1110011001110100011100010001111" "1001111001010100011011011011100" "1001001100000111000000110111110" "1010001110101000001111111000101" "1010001111110010110111011000101" "1100001000001101000010001001101" "1010100101111011010000011111010" "1010100001011111011001011111101" "1010110100101010001100011000010" "1010100010100001111000100100011" "1000000011100111010010001100000" "1010011110010001001011011011010" "1001101101010011011011110100010" "1101100110101100000011010010111" "1001110110000110100000010000110" "1011001100011110100001011001110" "1011001010101111010011010111000" "1010101011001001111111100110110" "1000110000001001111100000110101" "1000110100001010110110010100110" "1010100001000100101011001101100" "1011100011000000010101010011110" "1010011010110010010111101101110" "1010010111100110101011010000011" "1011111100011010100000111000001" "1010101011110100001110110110110" "1000111011010101000110000110110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 293
set hasByteEnable 0
set MemName QuantAct_m_1
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1011001101101001001010011110100" "1010011110010011011010011100110" "1010110010001010010111110000100" "1010011111000010010100111110011" "1011000110111110101001101011010" "1011011100100100100100000000111" "1011101100100011010101000001000" "1011010110001001101110010000110" "1110000111010100101010101111000" "1111010001010111100101000011110" "1010011001011010111001101011100" "1010000100110110110000000110111" "1100001111011011011010001111011" "1011101010101000001110001011110" "1011011101011100000111000110010" "1011100010110100100001001111100" "1000011000101000111100101010101" "1011010011010111101011011010001" "1010000011110101001101110101011" "1010001100100001001101101111100" "1011110110010000101001010101100" "1010100110010011100010110101011" "1011000111110101001000000101010" "1010101001111000000000100000101" "1010110111111101001010110000111" "1011011100111001000100011010110" "1010111010000000110001010101011" "1010100000000001100010110111101" "1010101100100110010001000110111" "1010110101001010011111111001110" "1010010011010010111011000111001" "1010111000000100110100010100010" "1001111010011010010011001111100" "1011111011001001011011011011101" "1010101011101000001110100000010" "1101010101010100110101010000010" "1011011111010010000001111001000" "1001011110101000000001000001000" "1101011111101001111111000101110" "1011010101111101001011111000110" "1011100111011100101110111101001" "1001100101100110001110110111101" "1001011010011110101110011101100" "1011001011101010111011100110100" "1100001001011001111001100111100" "1001100101101111110111001110001" "1010011010111000111101001110010" "1010001001111010110100100011110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 294
set hasByteEnable 0
set MemName QuantAct_m_2
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010100001010000000111000001010" "1010011110111001110001011101010" "1010010001000011110100000000100" "1011011010100011111000111000101" "1001111010100101000100001101010" "1011100011000111111011011001010" "1101101010000010000100010111100" "1001001100011010010111001111100" "1110010011011100101111001100101" "1010000010010110110010100000100" "1010110000011011011101111000001" "1001101001000011000011110010000" "1010001000010011111010100110010" "1001010010111101111101100101101" "1010000010111100011100001001101" "1010010000011011101010000001000" "1010111111001110111010111101100" "1010101011101100110111100100110" "1001110010011010101011110001110" "1011111001010111100000110000010" "1010101010010000100111000001001" "1010001100100011111111000110100" "1010000011100001110100110010001" "1010011001111111011111111010001" "1011011100100111111110000000111" "1010000111111000101010111011000" "1011011011001100011011110001000" "1011011100110110001100001000001" "1001001101101110010100111110101" "1010110000001100111001101101100" "1001011011001111110111110110100" "1100000100101100111011100101101" "1101000001100100010001001010101" "1011100110001000011001100101111" "1100000111111001010110010110110" "1010100100101111011111100101110" "1011010111101110000011011101101" "1010100110100000000010000011110" "1010010001010011001001111100101" "1001010110100011000100001110000" "1010000101101000101010001010110" "1010100100000111011010000000011" "1011010111000111011010110100000" "1011001011010001011101111101110" "1010110011001010110101111111000" "1011011000101101101111010010010" "1011011100000110111110000100100" "1010001110110101100110110111101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 295
set hasByteEnable 0
set MemName QuantAct_m_3
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010110001100001001111000100110" "1100010100010111011000001010000" "1101001000010101010011000100000" "1001011011000110111010000001111" "1100000101100011101000011111001" "1011101101110000010100010110111" "1011010100101111101101010110111" "1011100111011011011011001010001" "1100001011011000001000001011010" "1010000110100101011011001011100" "1010111110001111110000001101111" "1010000011111000010101100011111" "1011010010101000011011110001101" "1010110101000000100110011000100" "1001010011001111000010100100110" "1100001110101110001001001111111" "1011010111001101110111110100001" "1000111011101111101111110100100" "1011010000110111001101100001001" "1010000110101000101111100000100" "1110100000000101010011011110001" "1011010001100100000011000110100" "1011100001001111110100000110011" "1010000010111110111101111010110" "1100000010111001000101000110110" "1011001110010000010001101011110" "1100000111000011001011001010101" "1001111100001101101110001010010" "1100000011110011111110101110010" "1110011000000100111101001110011" "1001101001110010011011001000100" "1001111011100100111100101000011" "1010101011111000010000110111001" "1000010011000110111101010100100" "1001111010101110001011011110110" "1001111100010000111000011010000" "1010101101100011101011000100101" "1010000011011010000000101011011" "1100001110011110001110011100111" "1010111110111111101010011000001" "1011000001011110010001110100010" "1010011101110100111001100110000" "1011100111010100011100001000101" "1100001011001001101101110001110" "1011010110111011001100111010101" "1010101101101010010100101011001" "1001101110110010100110001111011" "1010010011111011010010000001010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 296
set hasByteEnable 0
set MemName QuantAct_m_4
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1011111101010100011110010100101" "1010001100010101010100010100100" "1011011110011010000110001111001" "1010011110101001101010101100000" "1010001110110010001111101101001" "1011000010000010001010000011010" "1011111111110111010111110101100" "1010101010010101111100100000011" "1010001011000000001111000100110" "1011010010100110111100010100101" "1001011001111110110000110101010" "1011110100011011101101100011001" "1010011111110110010000100000110" "1011000101010011011101101001000" "1011010001100110000100111001001" "1010100111010110100000110001111" "1010001100010100110001111110111" "1001010011111011001011011011001" "1010110011101001110100001000110" "1010101111111010100000110001010" "1011111111111111001101111111011" "1011110100111111100000011011011" "1010100100101101111010001001101" "1001011101010000000110110010010" "1010010011011101111011110101000" "1010010001110001101100011000001" "1011011011110111110100011010101" "1001011110000110100011111011101" "1011110000011011101010110001100" "1011011110001000000100111011000" "1010101011101011110101000110101" "1100011110001100010101000101011" "1011001011101000100010001011101" "1010011001001010001111010100000" "1010100010011000111111111100011" "1011111010000110010101100111000" "1010101110000010101010110011001" "1011000001010010011101110000000" "1001000001011011000101101110000" "1010111000010001110100111011110" "1010101100100100110110011000010" "1011001000011101000001101100011" "1100100110011100011101100111111" "1011000101110110101110001011101" "1010100111001101101100100100010" "1011011011100110100001101110011" "1010110010110101011101001100010" "1011100010010111100000110010011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 297
set hasByteEnable 0
set MemName QuantAct_m_5
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1011001001011110111111011000000" "1010000001110110011011001101000" "1010101010000100111100011001110" "1010000011101010000001001001011" "1010110110011011110100110010001" "1011011011010110111110100011100" "1010111001000100110011010110110" "1011001110110101001010001011101" "1011110101001011001010000110001" "1010110101000011001000111100000" "1010111000000110010111001111000" "1010100000000110011010011011101" "1001100001001011100100111001101" "1001101111001100001010010101011" "1011110100100011011000000010111" "1100011011001110100111010011011" "1011100101000110110111111100110" "1010011000001101000001000000010" "1011001000101100011010011110000" "1011001111001110100011011010001" "1001110011000101110000000111000" "1011100000101011111100001011100" "1010110100000101010100001100011" "1100001010100100000101011001001" "1011011001010011111111111111100" "1010100100110000010001010111010" "1011100100100101111000111100111" "1011010000010010110010000000001" "1001001001110001011010001111110" "1010100010000100011011110000101" "1010010111111011001011000001111" "1001110100111110100001111011110" "1011011100100001100000011000100" "1000111011001010100000101000111" "1011001010111001110101110101011" "1010101101010100001011010111100" "1111100010100001011110010100101" "1010011011000100101110110001001" "1011000111111001111101110000010" "1001100101000111001110010110110" "1010000001010110000000101111111" "1011110111011001010100000101011" "1011100110000001010000011111010" "1011100010111111111101101011101" "1011001010000001110111010110000" "1011010010111111100100000101110" "1011110100001101000111011111100" "1010001000100110010001000001010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 298
set hasByteEnable 0
set MemName QuantAct_m_6
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010010010101000010000110001010" "1010110001100000011110100011111" "1011011000001010110011110110100" "1010010110010110001010111111000" "1011000101011010110110110100000" "1001011100010001111101000110000" "1011000011111110111000100001110" "1010011000110101001100111000110" "1010011011110101000100000001010" "1010000101000100111010011100001" "1010110001011000001000111001111" "1010111101010110111010100110001" "1011101111001000011010000101100" "1011001111000001000000011101000" "1001111110110111101111101011010" "1010111101111010001100101101100" "1011100001000001101111110000000" "1000001101100101011000011011111" "1010001001001110001100100001011" "1010011100001001100000010101000" "1011110001011011011010101100010" "1011011111000101011001110110001" "1001110101011101111000110100001" "1010100100110111100110110000010" "1011011011011011101100000010010" "1010111010010100001011001010111" "1001110111010111011010000011010" "1010000011000110000111111101111" "1010101101101101111011100101110" "1011000111100100111100010001100" "1011000101011001000110010110010" "1011001110011101100001011011000" "1010111011010100101110110000010" "1010110000011011101100111111111" "1010011110001111001111100111110" "1001111011110111101000101000100" "1010100111000101110011100101000" "1001110010101011100010011011100" "1001110001111111011100111000111" "1110001001100000001011110111100" "1000110000001101010100001101101" "1010110011111010100000000101000" "1011011011011001001110001101010" "1011001101111000101000111011000" "1001111100000100110000101001110" "1011001110010100111100000000111" "1010110001000001010101000100010" "1011001110110000011011001000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 299
set hasByteEnable 0
set MemName QuantAct_m_7
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1011001001111100100011011011011" "1010110011111010100110000100001" "1010101111110101001111101100001" "1001101000010001100000001111101" "1010101001100101100111111000100" "1011001011100110100010100110001" "1011001110111000011001011110001" "1010110000001111001110000101110" "1010001100101111011010010001111" "1010101001110011010110001011100" "1010101100101010110001010110111" "1010000101001101111011010000011" "1000111111111011011101001101100" "1011100000110110001011110000001" "1011101001001001100100110101101" "1100010110111000111100010011001" "1010001111110110100101100010111" "1010100010110111110101010001101" "1011001111000001111111011101011" "1001110100011100100111100011011" "1011011101100101010001000011001" "1001100110010100100000010010001" "1011001011001001111110001011011" "1001111100001100110010110001110" "1010010001110110101001100111000" "1010001100010000101001000010111" "1001111001000001110001110010101" "1010101000101011110111000010100" "1001010101101100010001110011101" "1001111001101101001101010001110" "1000111101110111110010100010111" "1001100111000110101100100111100" "1010110100100010010101111010010" "1100100101110010010110100100001" "1110110111110010110111010101010" "1010011011101111100111111010101" "1100010010100110010010011001111" "1001101011000110011110110110101" "1001111010100011111101001010110" "1000011000111010100101010000000" "1011100100100111111011000011101" "1011101011000111001100000001010" "1100000000110100100101001100111" "1011001111100110111101101000010" "1111110001100010011100011110010" "1010110110001000110000010111100" "1010010001110110010011100011110" "1010100011100000101011101100000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 300
set hasByteEnable 0
set MemName QuantAct_m_8
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010110110111101111011100110111" "1011101001100111111010101010101" "1011000000010000100011110110011" "1111011010100110000000100101011" "1101100111111110110011001110000" "1001100101000100001010011010001" "1010100010010101110101000100010" "1010001101111011001100110000011" "1011010010001000101001010101001" "1010110100101100010100110010010" "1010101001100010110010011011011" "1001111010110010110010010110001" "1001111010010010101101101000001" "1001101111000000111100001110110" "1011101111101000011000100000010" "1010000010110010111011010111001" "1010100110000011101101011001000" "1010000011100100001110010111000" "1010110101111001101010110011110" "1010101010001101011111010010100" "1011010011111101110000001001010" "1010111111100110101010101001110" "1011001010010101000010011000000" "1001010110010111000111110011100" "1011010101100000111111011010010" "1011101101001000101100000100110" "1011000111110110011111101010010" "1100001111001101110011001100001" "1010111111101100111010000110111" "1001110100100101011111110111001" "1010100100110101111101100010010" "1001100011100100110100110011011" "1010110101101110011101011111100" "1010011111000111001110000111001" "1010111110110011000111000011101" "1000110100001101101001010000101" "1010100010110101101111011000111" "1010110001101111110010111011001" "1001111111000000010100111011010" "1010101011100010100100100010011" "1010010100101110000111100111111" "1110011110011101111100001101101" "1010010101010011011001111101001" "1011000010000001000110101000101" "1011001010011001011101100101011" "1011001011010010110011000001011" "1010101011110011100100111101001" "1001101000011100101000000011001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 301
set hasByteEnable 0
set MemName QuantAct_m_9
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1001110100001111110101011011011" "1010101000000101001000000101101" "1011100101000010110011011011000" "1011110000001011001111110101111" "1010100000101111110100001000000" "1010110100000111001010010101000" "1011110011100010101110001010011" "1001100100000001101011000001010" "1010110010010001101110000101111" "1010100001010001010001111111110" "1011110001001100110100101000110" "1011011111001111100111110110000" "1001100101001011000001101101101" "1100111000100111110111100101100" "1011000100000000101001100111110" "1011111110001010001100110110001" "1011000110101111000011000010100" "1011101110001010100111001111000" "1011101110100000011000100110011" "1001100000000000110111000110011" "1001101001001000100100100111010" "1011010010011101100110101101111" "1100010101001000101111010000000" "1010101000011101011101010001010" "1010101100100011101011011001110" "1010101001110010110000000100000" "1010111101011111011110011011011" "1001000000010010010000100100110" "1010000010001000000010001101101" "1010111110000110011111000001010" "1010000101111010101010100010100" "1011101010010100011111110111101" "1010000111101100101110000010010" "1010100110110111111011001100111" "1010011100000000100100100011100" "1011110100000110111100110000111" "1010100000010100011110001001100" "1010101001101000111100001101101" "1010111111110111011010000011111" "1010010111000010001110110010110" "1001001101100101010110101011110" "1011001111100110101111110001001" "1010101110110100101010001101111" "1010011011001100101000000100100" "1010001100100001100010110110010" "1011100100110011101100010010011" "1100100111001111110110100000101" "1011010001110101111000110000110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 302
set hasByteEnable 0
set MemName QuantAct_m_10
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1100000000111111011110101010111" "1011100000011001011100010011101" "1010011010100101101010111100100" "1010011101100101010010010101000" "1010010011001001001101100100000" "1011110010000111001111000100001" "1011010010011001101101100001111" "1011111010010111101101111110001" "1010000010000011000000100100100" "1011100001010011100100001001101" "1010101110010010100000001111100" "1011000010110110000011011000100" "1011101010101101001000111001011" "1011010100101001010111111010101" "1011010000101011111000000000101" "1011010100011110011001000101110" "1010000100110110110000011011000" "1011100110011001110110101011100" "1001101011000010001110101010111" "1010001001111101111101100011000" "1110111000010110001110001011001" "1010110100011111101100011011010" "1010001100011101000011100010110" "1010111111111100110111011011010" "1010111111100101001000010111011" "1010100101010111010100110010100" "1000000100100100011100001111101" "1011010100011011110111110011000" "1011101100000011110100001101100" "1010101111110101111101010111101" "1010011101101101101101000001101" "1001100100000001000001010001111" "1010101100001000111001000001100" "1011001010110101111111001010110" "1011001000110110101111101101100" "1000110111011110111101000000100" "1011110000011100001101101111100" "1010100010000100110110001110010" "1100000011101110001101100000101" "1010110000010100011101111010001" "1010110000101110110110011101001" "1010101001010100001111001101010" "1010111110011001101101001100111" "1010010101111000001011110101101" "1010111110001010111111100101011" "1010011110010100111011110010110" "1010100011111111110011010010100" "1011110110101101101100010100000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 303
set hasByteEnable 0
set MemName QuantAct_m_11
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1100000011111111111001011001110" "1001100101110101110000011101110" "1010000001000011100100110100000" "1100000001100010001011100111010" "1011110001100110011100010110101" "1010011100010001101010101001010" "1011101101010001101010101011110" "1011011111111111101111100011001" "1010010100011000101010000110101" "1011111001011001010011101111011" "1010110001101110101000100101000" "1001000100101000110001001000100" "1001010110000000001010000010111" "1100110111001011011100101000100" "1011101001001001110101100010010" "1011101000011001000101001100001" "1010000100100100100010111110101" "1010000001011000000100010001011" "1010111011001100100110101001010" "1010011100011011000100101010011" "1001110000110110010101010100010" "1010010110111011000000101001100" "1011001111011011000110000110010" "1011000011100110111001011001100" "1010110110110111000111111011010" "1011001000010001110011101111110" "1010101010001010010001010000110" "1010110010011001011000111001111" "1010110001111111111011010001010" "1010100001101011111001010110011" "1011000100010010011000000010010" "1001101010000001101011000101100" "1001110110101110111010010100101" "1010100000000100010110000111101" "1001111011011011110101110101001" "1010010001010000000000000001000" "1101101000111000010010000110111" "1010100011010010011100111100011" "1011100111001100011111010111011" "1011000100011011100011001111110" "1011000001110011010001000101111" "1010110000100001011110001101100" "1010111001111000110101001100011" "1011011101011111110011111111111" "1010111000011010010000111001000" "1101101010101000001100100100011" "1010000010100000111010101011010" "1010111010111010011110101101101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 304
set hasByteEnable 0
set MemName QuantAct_m_12
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010100111001101100111110101110" "1011000001100011110110000111001" "1010100111010011111110001110100" "1011001110100011001000001111001" "1011011011100100110011011101110" "1001111000101011001011010110000" "1001101111110001100001011001000" "1100101000101101000111010101001" "1011001000100101110110100010011" "1010101001010001000101100101110" "1010011000010000011001000111001" "1010111001001000011001000000101" "1011110100111000000000101001000" "1010001101001000110011001100010" "1001000110011000101111100010000" "1011010110010111001001000001101" "1000111110000000011111010110110" "1010001111001010001000110110010" "1010011100110100111011100000000" "1010110001101011000101001000010" "1100101011100101110011011110001" "1010111100100000110011100000000" "1011010000100101010010001100001" "1010111000101100110011100110010" "1011011011111000000010010001110" "1010101101111011010001101000010" "1010110000011101001100110001000" "1001101011010101110000101100101" "1011000011100110100111011100010" "1101110110100001010001011101011" "1011110001100111010001111010001" "1010101101010001001010111000101" "1010101100111011000000111100101" "1011001101001001101001101011000" "1011110011111101011000101010101" "1001001111111001110101101001000" "1000110000000111101011010110011" "1010101100010001000011000001101" "1010101100110100101101011001011" "1001111111101010100001000001100" "1011001100010000001001100001011" "1010111101000111111101110110111" "1011010101010011010111000110011" "1011000001000101011001101010110" "1011001011100101100000001000000" "1001110100111001011111101010010" "1001110101010111000010010011000" "1010111011100101010000111011100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 305
set hasByteEnable 0
set MemName QuantAct_m_13
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010111001101110101001000101101" "1010111001111100111011010011000" "1001101001011010000001110110111" "1010000011000010000101000000111" "1000101111000110010101111111100" "1100001001111010000000001110011" "1001110110111111100000011011111" "1011010011001111100111101101011" "1010011001110110001111000001110" "1001000010001110101000010111101" "1001100010000000000111010110000" "1010101100110000111001010000001" "1010101011110000010101000010011" "1000100010110111011101100001111" "1010000011111000111100011101111" "1010011100110100101010011111010" "1110011101001110001100001001000" "1001110000110000111101011101101" "1010110111110111001010011011100" "1011011000011111101101110001100" "1011110111011111011011101010100" "1011000010001110100000001000111" "1010101111111010011101010011100" "1010110111101110010010110000000" "1011001101101100110100001110100" "1010111011111100000011001100010" "1010001110101000001101000011010" "1001111100100110100101001101001" "1011010001101101011000000101000" "1011010000111001011010010101100" "1010110001101101100111000011011" "1010100101110000001011000011000" "1001110010010001000101111100101" "1011010100001001001101110110000" "1011001110111010110000000011011" "1001111000100100111110000110000" "1001111111100001010001001111110" "1011000000011100111000000011001" "1010001101000010111110001100110" "1001101100010101011001000011101" "1100100101001000101111000000101" "1001111100010001011111010100000" "1010101000010100110000100111011" "1011001010110000100110100001110" "1001100010100000000011000101011" "1011010000111000101111001011011" "1010011110111001110110110100000" "1100001000101100100100001101110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 306
set hasByteEnable 0
set MemName QuantAct_m_14
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1011100111110110010001010100010" "1001110001110100000001110111100" "1100001100100100001011101010100" "1100001000001000011010000001101" "1010110010000111101101000000110" "1010001111010110111101110011110" "1000101111011100110000011110000" "1010110000111100010110010000101" "1010000100001000011010100110010" "1010110101100001000011010110111" "1010011111100100001111100000110" "1010101001101111001110001100000" "1011101110011111000100011111010" "1011100110000001011101011001111" "1010001111010011011110011101001" "1100011111010010101011011101001" "1010111000101110000100111000000" "1001100000101101111111011011011" "1011010101011100011101100101011" "1010001110011000000010100000000" "1111100110011111100011101101111" "1111111111001011101100110101100" "1011110010110101100011001010000" "1010100110100011000101011000000" "1011010000100000100001100011110" "1011001101010011110010111100010" "1010110100000110111010111001001" "1011101001100111010100110111010" "1010010001010101001011000111000" "1100111101101010100000101011100" "1101001110101101101011100111100" "1010000011100010101000100110110" "1011011111001001001011011110010" "1010101111101110100010010011110" "1010110011111110010101011111000" "1010101011001110001111110010100" "1000010100111100111000111001101" "1011110011100010000110001001111" "1001000110100001111001101001000" "1011000000001101111100010000011" "1001111111001111111001101011000" "1001010100011011111000110010000" "1101101101100100100111001011110" "1011011001101100010000001000100" "1011011000101100100100111100001" "1011000101011101110110111110101" "1011101001001010101100010110011" "1010110001110011010101000111010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 307
set hasByteEnable 0
set MemName QuantAct_m_15
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 31
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "1010111110011111001111010010101" "1011011101100011010101001111100" "1001000100110000000110110101110" "1011110111011011111101010000010" "1011000110001010011111000001000" "1100010011011000001110111111001" "1011011111010001010110101110111" "1010001000110110010011000100001" "1010001011000100001001100001010" "1100010111011100000010001000001" "1010001010101101100001101001111" "1010000100100001010100010100100" "1010100110001100000101010000001" "1010010001010111011101010010000" "1001110001011011010000101001101" "1010101010011000111011000110010" "1010010000111011010111000110110" "1100100100010100000000110000001" "1010100100010111100010101010101" "1001100011001010000010101111010" "1001100010011010111010000010011" "1001110000100111001010100011110" "1010110101000101101100110000000" "1000111011010111100111000101011" "1011000001001110100010010111000" "1001111101101100100011111100101" "1010010100100110011100011111101" "1000111011010111011001000100001" "1010100111001101101011010011101" "1010001010011110100000110100101" "1010110011101001011111000001111" "1011011111010000001100000100100" "1010100011011011010101100100010" "1010100100100011110110001111000" "1011111100010011111110110101011" "1010000010100101111110010111011" "1010010010000111000000001000011" "1010011111101010100100101000110" "1010111000111001000010011100001" "1010000111011101110000010110101" "1100100100110100111110110011100" "1011011001101000001101001011100" "1110100101100001111000011100100" "1110100111101101110111100000011" "1010000100101100111011010100000" "1011100110101011110110000110101" "1011010110001001101011000111001" "1011010100100001001101111010101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 308
set hasByteEnable 0
set MemName QuantAct_e_0
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10101" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 309
set hasByteEnable 0
set MemName QuantAct_e_1
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 310
set hasByteEnable 0
set MemName QuantAct_e_2
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10111" "10111" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 311
set hasByteEnable 0
set MemName QuantAct_e_3
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 312
set hasByteEnable 0
set MemName QuantAct_e_4
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 313
set hasByteEnable 0
set MemName QuantAct_e_5
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10111" "10110" "10101" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 314
set hasByteEnable 0
set MemName QuantAct_e_6
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 315
set hasByteEnable 0
set MemName QuantAct_e_7
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10111" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 316
set hasByteEnable 0
set MemName QuantAct_e_8
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10111" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 317
set hasByteEnable 0
set MemName QuantAct_e_9
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 318
set hasByteEnable 0
set MemName QuantAct_e_10
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10101" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 319
set hasByteEnable 0
set MemName QuantAct_e_11
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "11000" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 320
set hasByteEnable 0
set MemName QuantAct_e_12
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10101" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 321
set hasByteEnable 0
set MemName QuantAct_e_13
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10101" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 322
set hasByteEnable 0
set MemName QuantAct_e_14
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10101" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 323
set hasByteEnable 0
set MemName QuantAct_e_15
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 5
set AddrRange 48
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10110" "10111" "10111" "10110" "10110" "10110" "10110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.237
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 324 \
    name in_V_data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_data_V \
    op interface \
    ports { in_V_data_V_dout { I 512 vector } in_V_data_V_empty_n { I 1 bit } in_V_data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
    name in_V_id_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_id_V \
    op interface \
    ports { in_V_id_V_dout { I 8 vector } in_V_id_V_empty_n { I 1 bit } in_V_id_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 326 \
    name in_V_dest_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_dest_V \
    op interface \
    ports { in_V_dest_V_dout { I 8 vector } in_V_dest_V_empty_n { I 1 bit } in_V_dest_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
    name in_V_user_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_user_V \
    op interface \
    ports { in_V_user_V_dout { I 16 vector } in_V_user_V_empty_n { I 1 bit } in_V_user_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 328 \
    name in_V_last_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_last_V \
    op interface \
    ports { in_V_last_V_dout { I 1 vector } in_V_last_V_empty_n { I 1 bit } in_V_last_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 329 \
    name out_V_data_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_data_V \
    op interface \
    ports { out_V_data_V_din { O 512 vector } out_V_data_V_full_n { I 1 bit } out_V_data_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 330 \
    name out_V_id_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_id_V \
    op interface \
    ports { out_V_id_V_din { O 8 vector } out_V_id_V_full_n { I 1 bit } out_V_id_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 331 \
    name out_V_dest_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_dest_V \
    op interface \
    ports { out_V_dest_V_din { O 8 vector } out_V_dest_V_full_n { I 1 bit } out_V_dest_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 332 \
    name out_V_user_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_user_V \
    op interface \
    ports { out_V_user_V_din { O 16 vector } out_V_user_V_full_n { I 1 bit } out_V_user_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 333 \
    name out_V_last_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_last_V \
    op interface \
    ports { out_V_last_V_din { O 1 vector } out_V_last_V_full_n { I 1 bit } out_V_last_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


