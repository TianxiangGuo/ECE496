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

entity QuantAct_m_2_rom is 
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


architecture rtl of QuantAct_m_2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010100001010000000111000001010", 
    1 => "1010011110111001110001011101010", 
    2 => "1010010001000011110100000000100", 
    3 => "1011011010100011111000111000101", 
    4 => "1001111010100101000100001101010", 
    5 => "1011100011000111111011011001010", 
    6 => "1101101010000010000100010111100", 
    7 => "1001001100011010010111001111100", 
    8 => "1110010011011100101111001100101", 
    9 => "1010000010010110110010100000100", 
    10 => "1010110000011011011101111000001", 
    11 => "1001101001000011000011110010000", 
    12 => "1010001000010011111010100110010", 
    13 => "1001010010111101111101100101101", 
    14 => "1010000010111100011100001001101", 
    15 => "1010010000011011101010000001000", 
    16 => "1010111111001110111010111101100", 
    17 => "1010101011101100110111100100110", 
    18 => "1001110010011010101011110001110", 
    19 => "1011111001010111100000110000010", 
    20 => "1010101010010000100111000001001", 
    21 => "1010001100100011111111000110100", 
    22 => "1010000011100001110100110010001", 
    23 => "1010011001111111011111111010001", 
    24 => "1011011100100111111110000000111", 
    25 => "1010000111111000101010111011000", 
    26 => "1011011011001100011011110001000", 
    27 => "1011011100110110001100001000001", 
    28 => "1001001101101110010100111110101", 
    29 => "1010110000001100111001101101100", 
    30 => "1001011011001111110111110110100", 
    31 => "1100000100101100111011100101101", 
    32 => "1101000001100100010001001010101", 
    33 => "1011100110001000011001100101111", 
    34 => "1100000111111001010110010110110", 
    35 => "1010100100101111011111100101110", 
    36 => "1011010111101110000011011101101", 
    37 => "1010100110100000000010000011110", 
    38 => "1010010001010011001001111100101", 
    39 => "1001010110100011000100001110000", 
    40 => "1010000101101000101010001010110", 
    41 => "1010100100000111011010000000011", 
    42 => "1011010111000111011010110100000", 
    43 => "1011001011010001011101111101110", 
    44 => "1010110011001010110101111111000", 
    45 => "1011011000101101101111010010010", 
    46 => "1011011100000110111110000100100", 
    47 => "1010001110110101100110110111101" );


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

entity QuantAct_m_2 is
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

architecture arch of QuantAct_m_2 is
    component QuantAct_m_2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_2_rom_U :  component QuantAct_m_2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


