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

entity QuantAct_m_1_rom is 
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


architecture rtl of QuantAct_m_1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011001101101001001010011110100", 
    1 => "1010011110010011011010011100110", 
    2 => "1010110010001010010111110000100", 
    3 => "1010011111000010010100111110011", 
    4 => "1011000110111110101001101011010", 
    5 => "1011011100100100100100000000111", 
    6 => "1011101100100011010101000001000", 
    7 => "1011010110001001101110010000110", 
    8 => "1110000111010100101010101111000", 
    9 => "1111010001010111100101000011110", 
    10 => "1010011001011010111001101011100", 
    11 => "1010000100110110110000000110111", 
    12 => "1100001111011011011010001111011", 
    13 => "1011101010101000001110001011110", 
    14 => "1011011101011100000111000110010", 
    15 => "1011100010110100100001001111100", 
    16 => "1000011000101000111100101010101", 
    17 => "1011010011010111101011011010001", 
    18 => "1010000011110101001101110101011", 
    19 => "1010001100100001001101101111100", 
    20 => "1011110110010000101001010101100", 
    21 => "1010100110010011100010110101011", 
    22 => "1011000111110101001000000101010", 
    23 => "1010101001111000000000100000101", 
    24 => "1010110111111101001010110000111", 
    25 => "1011011100111001000100011010110", 
    26 => "1010111010000000110001010101011", 
    27 => "1010100000000001100010110111101", 
    28 => "1010101100100110010001000110111", 
    29 => "1010110101001010011111111001110", 
    30 => "1010010011010010111011000111001", 
    31 => "1010111000000100110100010100010", 
    32 => "1001111010011010010011001111100", 
    33 => "1011111011001001011011011011101", 
    34 => "1010101011101000001110100000010", 
    35 => "1101010101010100110101010000010", 
    36 => "1011011111010010000001111001000", 
    37 => "1001011110101000000001000001000", 
    38 => "1101011111101001111111000101110", 
    39 => "1011010101111101001011111000110", 
    40 => "1011100111011100101110111101001", 
    41 => "1001100101100110001110110111101", 
    42 => "1001011010011110101110011101100", 
    43 => "1011001011101010111011100110100", 
    44 => "1100001001011001111001100111100", 
    45 => "1001100101101111110111001110001", 
    46 => "1010011010111000111101001110010", 
    47 => "1010001001111010110100100011110" );


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

entity QuantAct_m_1 is
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

architecture arch of QuantAct_m_1 is
    component QuantAct_m_1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_1_rom_U :  component QuantAct_m_1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


