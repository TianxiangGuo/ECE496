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

entity QuantAct_m_15_rom is 
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


architecture rtl of QuantAct_m_15_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010111110011111001111010010101", 
    1 => "1011011101100011010101001111100", 
    2 => "1001000100110000000110110101110", 
    3 => "1011110111011011111101010000010", 
    4 => "1011000110001010011111000001000", 
    5 => "1100010011011000001110111111001", 
    6 => "1011011111010001010110101110111", 
    7 => "1010001000110110010011000100001", 
    8 => "1010001011000100001001100001010", 
    9 => "1100010111011100000010001000001", 
    10 => "1010001010101101100001101001111", 
    11 => "1010000100100001010100010100100", 
    12 => "1010100110001100000101010000001", 
    13 => "1010010001010111011101010010000", 
    14 => "1001110001011011010000101001101", 
    15 => "1010101010011000111011000110010", 
    16 => "1010010000111011010111000110110", 
    17 => "1100100100010100000000110000001", 
    18 => "1010100100010111100010101010101", 
    19 => "1001100011001010000010101111010", 
    20 => "1001100010011010111010000010011", 
    21 => "1001110000100111001010100011110", 
    22 => "1010110101000101101100110000000", 
    23 => "1000111011010111100111000101011", 
    24 => "1011000001001110100010010111000", 
    25 => "1001111101101100100011111100101", 
    26 => "1010010100100110011100011111101", 
    27 => "1000111011010111011001000100001", 
    28 => "1010100111001101101011010011101", 
    29 => "1010001010011110100000110100101", 
    30 => "1010110011101001011111000001111", 
    31 => "1011011111010000001100000100100", 
    32 => "1010100011011011010101100100010", 
    33 => "1010100100100011110110001111000", 
    34 => "1011111100010011111110110101011", 
    35 => "1010000010100101111110010111011", 
    36 => "1010010010000111000000001000011", 
    37 => "1010011111101010100100101000110", 
    38 => "1010111000111001000010011100001", 
    39 => "1010000111011101110000010110101", 
    40 => "1100100100110100111110110011100", 
    41 => "1011011001101000001101001011100", 
    42 => "1110100101100001111000011100100", 
    43 => "1110100111101101110111100000011", 
    44 => "1010000100101100111011010100000", 
    45 => "1011100110101011110110000110101", 
    46 => "1011010110001001101011000111001", 
    47 => "1011010100100001001101111010101" );


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

entity QuantAct_m_15 is
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

architecture arch of QuantAct_m_15 is
    component QuantAct_m_15_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_15_rom_U :  component QuantAct_m_15_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


