/* Generated automatically by the program `gencodes'
from the machine description file `md'.  */

#ifndef MAX_INSN_CODE

enum insn_code {
  CODE_FOR_tstsi = 2,
  CODE_FOR_tsthi = 3,
  CODE_FOR_tstqi = 4,
  CODE_FOR_tstsf = 5,
  CODE_FOR_tstdf = 8,
  CODE_FOR_cmpsi = 11,
  CODE_FOR_cmphi = 12,
  CODE_FOR_cmpqi = 14,
  CODE_FOR_cmpdf = 15,
  CODE_FOR_cmpsf = 18,
  CODE_FOR_swapsi = 30,
  CODE_FOR_movsi = 33,
  CODE_FOR_movhi = 34,
  CODE_FOR_movstricthi = 35,
  CODE_FOR_movqi = 36,
  CODE_FOR_movstrictqi = 37,
  CODE_FOR_movsf = 38,
  CODE_FOR_movdf = 39,
  CODE_FOR_movdi = 40,
  CODE_FOR_pushasi = 41,
  CODE_FOR_truncsiqi2 = 43,
  CODE_FOR_trunchiqi2 = 44,
  CODE_FOR_truncsihi2 = 45,
  CODE_FOR_zero_extendhisi2 = 46,
  CODE_FOR_zero_extendqihi2 = 47,
  CODE_FOR_zero_extendqisi2 = 48,
  CODE_FOR_extendhisi2 = 52,
  CODE_FOR_extendqihi2 = 53,
  CODE_FOR_extendqisi2 = 54,
  CODE_FOR_extendsfdf2 = 55,
  CODE_FOR_truncdfsf2 = 58,
  CODE_FOR_floatsisf2 = 61,
  CODE_FOR_floatsidf2 = 64,
  CODE_FOR_floathisf2 = 67,
  CODE_FOR_floathidf2 = 68,
  CODE_FOR_floatqisf2 = 69,
  CODE_FOR_floatqidf2 = 70,
  CODE_FOR_ftruncdf2 = 71,
  CODE_FOR_ftruncsf2 = 72,
  CODE_FOR_fixsfqi2 = 73,
  CODE_FOR_fixsfhi2 = 74,
  CODE_FOR_fixsfsi2 = 75,
  CODE_FOR_fixdfqi2 = 76,
  CODE_FOR_fixdfhi2 = 77,
  CODE_FOR_fixdfsi2 = 78,
  CODE_FOR_fix_truncsfsi2 = 79,
  CODE_FOR_fix_truncdfsi2 = 80,
  CODE_FOR_addsi3 = 81,
  CODE_FOR_addhi3 = 83,
  CODE_FOR_addqi3 = 85,
  CODE_FOR_adddf3 = 87,
  CODE_FOR_addsf3 = 90,
  CODE_FOR_subsi3 = 93,
  CODE_FOR_subhi3 = 95,
  CODE_FOR_subqi3 = 97,
  CODE_FOR_subdf3 = 99,
  CODE_FOR_subsf3 = 102,
  CODE_FOR_mulhi3 = 105,
  CODE_FOR_mulhisi3 = 106,
  CODE_FOR_mulsi3 = 107,
  CODE_FOR_umulhi3 = 108,
  CODE_FOR_umulhisi3 = 109,
  CODE_FOR_umulsi3 = 110,
  CODE_FOR_muldf3 = 111,
  CODE_FOR_mulsf3 = 114,
  CODE_FOR_divhi3 = 117,
  CODE_FOR_divhisi3 = 118,
  CODE_FOR_divsi3 = 119,
  CODE_FOR_udivhi3 = 120,
  CODE_FOR_udivhisi3 = 121,
  CODE_FOR_udivsi3 = 122,
  CODE_FOR_divdf3 = 123,
  CODE_FOR_divsf3 = 126,
  CODE_FOR_modhi3 = 129,
  CODE_FOR_modhisi3 = 130,
  CODE_FOR_umodhi3 = 131,
  CODE_FOR_umodhisi3 = 132,
  CODE_FOR_divmodsi4 = 133,
  CODE_FOR_udivmodsi4 = 134,
  CODE_FOR_andsi3 = 135,
  CODE_FOR_andhi3 = 136,
  CODE_FOR_andqi3 = 137,
  CODE_FOR_iorsi3 = 140,
  CODE_FOR_iorhi3 = 141,
  CODE_FOR_iorqi3 = 142,
  CODE_FOR_xorsi3 = 143,
  CODE_FOR_xorhi3 = 144,
  CODE_FOR_xorqi3 = 145,
  CODE_FOR_negsi2 = 146,
  CODE_FOR_neghi2 = 147,
  CODE_FOR_negqi2 = 148,
  CODE_FOR_negsf2 = 149,
  CODE_FOR_negdf2 = 152,
  CODE_FOR_abssf2 = 155,
  CODE_FOR_absdf2 = 158,
  CODE_FOR_one_cmplsi2 = 161,
  CODE_FOR_one_cmplhi2 = 162,
  CODE_FOR_one_cmplqi2 = 163,
  CODE_FOR_ashlsi3 = 170,
  CODE_FOR_ashlhi3 = 171,
  CODE_FOR_ashlqi3 = 172,
  CODE_FOR_ashrsi3 = 173,
  CODE_FOR_ashrhi3 = 174,
  CODE_FOR_ashrqi3 = 175,
  CODE_FOR_lshlsi3 = 176,
  CODE_FOR_lshlhi3 = 177,
  CODE_FOR_lshlqi3 = 178,
  CODE_FOR_lshrsi3 = 179,
  CODE_FOR_lshrhi3 = 180,
  CODE_FOR_lshrqi3 = 181,
  CODE_FOR_rotlsi3 = 182,
  CODE_FOR_rotlhi3 = 183,
  CODE_FOR_rotlqi3 = 184,
  CODE_FOR_rotrsi3 = 185,
  CODE_FOR_rotrhi3 = 186,
  CODE_FOR_rotrqi3 = 187,
  CODE_FOR_extv = 191,
  CODE_FOR_extzv = 192,
  CODE_FOR_insv = 196,
  CODE_FOR_seq = 208,
  CODE_FOR_sne = 209,
  CODE_FOR_sgt = 210,
  CODE_FOR_sgtu = 211,
  CODE_FOR_slt = 212,
  CODE_FOR_sltu = 213,
  CODE_FOR_sge = 214,
  CODE_FOR_sgeu = 215,
  CODE_FOR_sle = 216,
  CODE_FOR_sleu = 217,
  CODE_FOR_beq = 218,
  CODE_FOR_bne = 219,
  CODE_FOR_bgt = 220,
  CODE_FOR_bgtu = 221,
  CODE_FOR_blt = 222,
  CODE_FOR_bltu = 223,
  CODE_FOR_bge = 224,
  CODE_FOR_bgeu = 225,
  CODE_FOR_ble = 226,
  CODE_FOR_bleu = 227,
  CODE_FOR_casesi_1 = 238,
  CODE_FOR_casesi_2 = 239,
  CODE_FOR_casesi = 240,
  CODE_FOR_jump = 242,
  CODE_FOR_call = 245,
  CODE_FOR_call_value = 246,
  CODE_FOR_return = 247,
  CODE_FOR_nothing };

#define MAX_INSN_CODE ((int) CODE_FOR_nothing)
#endif /* MAX_INSN_CODE */