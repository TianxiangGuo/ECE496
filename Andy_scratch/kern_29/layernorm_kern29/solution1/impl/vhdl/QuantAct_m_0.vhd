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

entity QuantAct_m_0_rom is 
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


architecture rtl of QuantAct_m_0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1001101110001011000101101011001", 
    1 => "1011110010010110100000010001111", 
    2 => "1010010001110100101001011001010", 
    3 => "1010000010101110111000100100010", 
    4 => "1010110000000101011001100111000", 
    5 => "1001110001010111011011011001110", 
    6 => "1010100110100111001101000011011", 
    7 => "1011001011010001011101010101011", 
    8 => "1010000101101111110001000100011", 
    9 => "1011011100100011101111000101110", 
    10 => "1001110010111110111011110010111", 
    11 => "1100001111010110011000010010000", 
    12 => "1001101010100101100111011010101", 
    13 => "1010110111110010011110100001100", 
    14 => "1011101110000101001000100111000", 
    15 => "1010101111110010010110001000111", 
    16 => "1010010101111011000001100111000", 
    17 => "1001010001111111100100010011010", 
    18 => "1010011011100000110100111100011", 
    19 => "1011000110101100111110011010011", 
    20 => "1010110000011010111000101101000", 
    21 => "1110011001110100011100010001111", 
    22 => "1001111001010100011011011011100", 
    23 => "1001001100000111000000110111110", 
    24 => "1010001110101000001111111000101", 
    25 => "1010001111110010110111011000101", 
    26 => "1100001000001101000010001001101", 
    27 => "1010100101111011010000011111010", 
    28 => "1010100001011111011001011111101", 
    29 => "1010110100101010001100011000010", 
    30 => "1010100010100001111000100100011", 
    31 => "1000000011100111010010001100000", 
    32 => "1010011110010001001011011011010", 
    33 => "1001101101010011011011110100010", 
    34 => "1101100110101100000011010010111", 
    35 => "1001110110000110100000010000110", 
    36 => "1011001100011110100001011001110", 
    37 => "1011001010101111010011010111000", 
    38 => "1010101011001001111111100110110", 
    39 => "1000110000001001111100000110101", 
    40 => "1000110100001010110110010100110", 
    41 => "1010100001000100101011001101100", 
    42 => "1011100011000000010101010011110", 
    43 => "1010011010110010010111101101110", 
    44 => "1010010111100110101011010000011", 
    45 => "1011111100011010100000111000001", 
    46 => "1010101011110100001110110110110", 
    47 => "1000111011010101000110000110110" );


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

entity QuantAct_m_0 is
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

architecture arch of QuantAct_m_0 is
    component QuantAct_m_0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    QuantAct_m_0_rom_U :  component QuantAct_m_0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


