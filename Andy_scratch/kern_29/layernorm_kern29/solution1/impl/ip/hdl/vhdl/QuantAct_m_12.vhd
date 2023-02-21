-- ==============================================================
-- File generated on Mon Feb 20 12:11:19 EST 2023
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity QuantAct_m_12_rom is 
    generic(
             DWIDTH     : integer := 31; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 48
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of QuantAct_m_12_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010100111001101100111110101110", 
    1 => "1011000001100011110110000111001", 
    2 => "1010100111010011111110001110100", 
    3 => "1011001110100011001000001111001", 
    4 => "1011011011100100110011011101110", 
    5 => "1001111000101011001011010110000", 
    6 => "1001101111110001100001011001000", 
    7 => "1100101000101101000111010101001", 
    8 => "1011001000100101110110100010011", 
    9 => "1010101001010001000101100101110", 
    10 => "1010011000010000011001000111001", 
    11 => "1010111001001000011001000000101", 
    12 => "1011110100111000000000101001000", 
    13 => "1010001101001000110011001100010", 
    14 => "1001000110011000101111100010000", 
    15 => "1011010110010111001001000001101", 
    16 => "1000111110000000011111010110110", 
    17 => "1010001111001010001000110110010", 
    18 => "1010011100110100111011100000000", 
    19 => "1010110001101011000101001000010", 
    20 => "1100101011100101110011011110001", 
    21 => "1010111100100000110011100000000", 
    22 => "1011010000100101010010001100001", 
    23 => "1010111000101100110011100110010", 
    24 => "1011011011111000000010010001110", 
    25 => "1010101101111011010001101000010", 
    26 => "1010110000011101001100110001000", 
    27 => "1001101011010101110000101100101", 
    28 => "1011000011100110100111011100010", 
    29 => "1101110110100001010001011101011", 
    30 => "1011110001100111010001111010001", 
    31 => "1010101101010001001010111000101", 
    32 => "1010101100111011000000111100101", 
    33 => "1011001101001001101001101011000", 
    34 => "1011110011111101011000101010101", 
    35 => "1001001111111001110101101001000", 
    36 => "1000110000000111101011010110011", 
    37 => "1010101100010001000011000001101", 
    38 => "1010101100110100101101011001011", 
    39 => "1001111111101010100001000001100", 
    40 => "1011001100010000001001100001011", 
    41 => "1010111101000111111101110110111", 
    42 => "1011010101010011010111000110011", 
    43 => "1011000001000101011001101010110", 
    44 => "1011001011100101100000001000000", 
    45 => "1001110100111001011111101010010", 
    46 => "1001110101010111000010010011000", 
    47 => "1010111011100101010000111011100" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity QuantAct_m_12 is
    generic (
        DataWidth : INTEGER := 31;
        AddressRange : INTEGER := 48;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of QuantAct_m_12 is
    component QuantAct_m_12_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_12_rom_U :  component QuantAct_m_12_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


