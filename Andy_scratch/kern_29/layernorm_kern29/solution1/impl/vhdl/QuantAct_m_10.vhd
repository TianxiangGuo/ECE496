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

entity QuantAct_m_10_rom is 
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


architecture rtl of QuantAct_m_10_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1100000000111111011110101010111", 
    1 => "1011100000011001011100010011101", 
    2 => "1010011010100101101010111100100", 
    3 => "1010011101100101010010010101000", 
    4 => "1010010011001001001101100100000", 
    5 => "1011110010000111001111000100001", 
    6 => "1011010010011001101101100001111", 
    7 => "1011111010010111101101111110001", 
    8 => "1010000010000011000000100100100", 
    9 => "1011100001010011100100001001101", 
    10 => "1010101110010010100000001111100", 
    11 => "1011000010110110000011011000100", 
    12 => "1011101010101101001000111001011", 
    13 => "1011010100101001010111111010101", 
    14 => "1011010000101011111000000000101", 
    15 => "1011010100011110011001000101110", 
    16 => "1010000100110110110000011011000", 
    17 => "1011100110011001110110101011100", 
    18 => "1001101011000010001110101010111", 
    19 => "1010001001111101111101100011000", 
    20 => "1110111000010110001110001011001", 
    21 => "1010110100011111101100011011010", 
    22 => "1010001100011101000011100010110", 
    23 => "1010111111111100110111011011010", 
    24 => "1010111111100101001000010111011", 
    25 => "1010100101010111010100110010100", 
    26 => "1000000100100100011100001111101", 
    27 => "1011010100011011110111110011000", 
    28 => "1011101100000011110100001101100", 
    29 => "1010101111110101111101010111101", 
    30 => "1010011101101101101101000001101", 
    31 => "1001100100000001000001010001111", 
    32 => "1010101100001000111001000001100", 
    33 => "1011001010110101111111001010110", 
    34 => "1011001000110110101111101101100", 
    35 => "1000110111011110111101000000100", 
    36 => "1011110000011100001101101111100", 
    37 => "1010100010000100110110001110010", 
    38 => "1100000011101110001101100000101", 
    39 => "1010110000010100011101111010001", 
    40 => "1010110000101110110110011101001", 
    41 => "1010101001010100001111001101010", 
    42 => "1010111110011001101101001100111", 
    43 => "1010010101111000001011110101101", 
    44 => "1010111110001010111111100101011", 
    45 => "1010011110010100111011110010110", 
    46 => "1010100011111111110011010010100", 
    47 => "1011110110101101101100010100000" );


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

entity QuantAct_m_10 is
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

architecture arch of QuantAct_m_10 is
    component QuantAct_m_10_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_10_rom_U :  component QuantAct_m_10_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


