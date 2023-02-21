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

entity QuantAct_m_9_rom is 
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


architecture rtl of QuantAct_m_9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1001110100001111110101011011011", 
    1 => "1010101000000101001000000101101", 
    2 => "1011100101000010110011011011000", 
    3 => "1011110000001011001111110101111", 
    4 => "1010100000101111110100001000000", 
    5 => "1010110100000111001010010101000", 
    6 => "1011110011100010101110001010011", 
    7 => "1001100100000001101011000001010", 
    8 => "1010110010010001101110000101111", 
    9 => "1010100001010001010001111111110", 
    10 => "1011110001001100110100101000110", 
    11 => "1011011111001111100111110110000", 
    12 => "1001100101001011000001101101101", 
    13 => "1100111000100111110111100101100", 
    14 => "1011000100000000101001100111110", 
    15 => "1011111110001010001100110110001", 
    16 => "1011000110101111000011000010100", 
    17 => "1011101110001010100111001111000", 
    18 => "1011101110100000011000100110011", 
    19 => "1001100000000000110111000110011", 
    20 => "1001101001001000100100100111010", 
    21 => "1011010010011101100110101101111", 
    22 => "1100010101001000101111010000000", 
    23 => "1010101000011101011101010001010", 
    24 => "1010101100100011101011011001110", 
    25 => "1010101001110010110000000100000", 
    26 => "1010111101011111011110011011011", 
    27 => "1001000000010010010000100100110", 
    28 => "1010000010001000000010001101101", 
    29 => "1010111110000110011111000001010", 
    30 => "1010000101111010101010100010100", 
    31 => "1011101010010100011111110111101", 
    32 => "1010000111101100101110000010010", 
    33 => "1010100110110111111011001100111", 
    34 => "1010011100000000100100100011100", 
    35 => "1011110100000110111100110000111", 
    36 => "1010100000010100011110001001100", 
    37 => "1010101001101000111100001101101", 
    38 => "1010111111110111011010000011111", 
    39 => "1010010111000010001110110010110", 
    40 => "1001001101100101010110101011110", 
    41 => "1011001111100110101111110001001", 
    42 => "1010101110110100101010001101111", 
    43 => "1010011011001100101000000100100", 
    44 => "1010001100100001100010110110010", 
    45 => "1011100100110011101100010010011", 
    46 => "1100100111001111110110100000101", 
    47 => "1011010001110101111000110000110" );


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

entity QuantAct_m_9 is
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

architecture arch of QuantAct_m_9 is
    component QuantAct_m_9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_9_rom_U :  component QuantAct_m_9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


