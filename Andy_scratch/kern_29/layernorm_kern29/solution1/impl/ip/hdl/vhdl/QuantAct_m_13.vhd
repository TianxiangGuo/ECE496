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

entity QuantAct_m_13_rom is 
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


architecture rtl of QuantAct_m_13_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010111001101110101001000101101", 
    1 => "1010111001111100111011010011000", 
    2 => "1001101001011010000001110110111", 
    3 => "1010000011000010000101000000111", 
    4 => "1000101111000110010101111111100", 
    5 => "1100001001111010000000001110011", 
    6 => "1001110110111111100000011011111", 
    7 => "1011010011001111100111101101011", 
    8 => "1010011001110110001111000001110", 
    9 => "1001000010001110101000010111101", 
    10 => "1001100010000000000111010110000", 
    11 => "1010101100110000111001010000001", 
    12 => "1010101011110000010101000010011", 
    13 => "1000100010110111011101100001111", 
    14 => "1010000011111000111100011101111", 
    15 => "1010011100110100101010011111010", 
    16 => "1110011101001110001100001001000", 
    17 => "1001110000110000111101011101101", 
    18 => "1010110111110111001010011011100", 
    19 => "1011011000011111101101110001100", 
    20 => "1011110111011111011011101010100", 
    21 => "1011000010001110100000001000111", 
    22 => "1010101111111010011101010011100", 
    23 => "1010110111101110010010110000000", 
    24 => "1011001101101100110100001110100", 
    25 => "1010111011111100000011001100010", 
    26 => "1010001110101000001101000011010", 
    27 => "1001111100100110100101001101001", 
    28 => "1011010001101101011000000101000", 
    29 => "1011010000111001011010010101100", 
    30 => "1010110001101101100111000011011", 
    31 => "1010100101110000001011000011000", 
    32 => "1001110010010001000101111100101", 
    33 => "1011010100001001001101110110000", 
    34 => "1011001110111010110000000011011", 
    35 => "1001111000100100111110000110000", 
    36 => "1001111111100001010001001111110", 
    37 => "1011000000011100111000000011001", 
    38 => "1010001101000010111110001100110", 
    39 => "1001101100010101011001000011101", 
    40 => "1100100101001000101111000000101", 
    41 => "1001111100010001011111010100000", 
    42 => "1010101000010100110000100111011", 
    43 => "1011001010110000100110100001110", 
    44 => "1001100010100000000011000101011", 
    45 => "1011010000111000101111001011011", 
    46 => "1010011110111001110110110100000", 
    47 => "1100001000101100100100001101110" );


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

entity QuantAct_m_13 is
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

architecture arch of QuantAct_m_13 is
    component QuantAct_m_13_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_13_rom_U :  component QuantAct_m_13_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


