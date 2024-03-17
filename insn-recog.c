/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"

/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into
   insn_templates and insn_n_operands (found in insn-output.c)
   or as an argument to output_insn_hairy (also in insn-output.c).  */

rtx recog_operand[MAX_RECOG_OPERANDS];

rtx *recog_operand_loc[MAX_RECOG_OPERANDS];

rtx *recog_dup_loc[MAX_DUP_OPERANDS];

char recog_dup_num[MAX_DUP_OPERANDS];

extern rtx recog_addr_dummy;

#define operands recog_operand

int
recog_1 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L35:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == MINUS && 1)
    goto L46;
 L67:
  if (GET_CODE (x1) == MINUS && GET_MODE (x1) == DFmode && 1)
    goto L68;
  if (GET_CODE (x1) == MINUS && GET_MODE (x1) == SFmode && 1)
    goto L81;
  if (GET_CODE (x1) == ZERO_EXTRACT && 1)
    goto L86;
  if (GET_CODE (x1) == SUBREG && GET_MODE (x1) == SImode && XINT (x1, 1) == 0 && 1)
    goto L140;
  if (GET_CODE (x1) == AND && GET_MODE (x1) == SImode && 1)
    goto L146;
 L899:
  if (GET_CODE (x1) == ZERO_EXTRACT && GET_MODE (x1) == SImode && 1)
    goto L900;
  if (GET_CODE (x1) == SUBREG && GET_MODE (x1) == QImode && XINT (x1, 1) == 0 && 1)
    goto L906;
  if (GET_CODE (x1) == SUBREG && GET_MODE (x1) == HImode && XINT (x1, 1) == 0 && 1)
    goto L913;
 L8:
  if (general_operand (x1, SImode))
    { recog_operand[0] = x1; return 2; }
 L11:
  if (general_operand (x1, HImode))
    { recog_operand[0] = x1; return 3; }
 L14:
  if (general_operand (x1, QImode))
    { recog_operand[0] = x1; return 4; }
 L23:
  if (general_operand (x1, SFmode))
    { recog_operand[0] = x1; if (TARGET_68881) return 7; }
 L32:
  if (general_operand (x1, DFmode))
    { recog_operand[0] = x1; if (TARGET_68881) return 10; }
  goto ret0;
 L46:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM && GET_MODE (x2) == QImode && 1)
    goto L47;
  if (GET_CODE (x2) == LSHIFTRT && GET_MODE (x2) == SImode && 1)
    goto L701;
  if (GET_CODE (x2) == ASHIFTRT && GET_MODE (x2) == SImode && 1)
    goto L715;
 L36:
  if (general_operand (x2, SImode))
    { recog_operand[0] = x2; goto L37; }
 L41:
  if (general_operand (x2, HImode))
    { recog_operand[0] = x2; goto L42; }
 L55:
  if (general_operand (x2, QImode))
    { recog_operand[0] = x2; goto L694; }
  goto L67;
 L47:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == POST_INC && GET_MODE (x3) == SImode && 1)
    goto L48;
  goto L36;
 L48:
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    { recog_operand[0] = x4; goto L49; }
  goto L36;
 L49:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MEM && GET_MODE (x2) == QImode && 1)
    goto L50;
  x2 = XEXP (x1, 0);
  goto L36;
 L50:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == POST_INC && GET_MODE (x3) == SImode && 1)
    goto L51;
  x2 = XEXP (x1, 0);
  goto L36;
 L51:
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    { recog_operand[1] = x4; if (! CONSTANT_P (operands[0]) && ! CONSTANT_P (operands[1])) return 13; }
  x2 = XEXP (x1, 0);
  goto L36;
 L701:
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    { recog_operand[0] = x3; goto L702; }
  goto L36;
 L702:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 24 && 1)
    goto L703;
  goto L36;
 L703:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; if ((GET_CODE (operands[1]) == CONST_INT
    && (INTVAL (operands[1]) & ~0xff) == 0)) return 167; }
  x2 = XEXP (x1, 0);
  goto L36;
 L715:
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    { recog_operand[0] = x3; goto L716; }
  goto L36;
 L716:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 24 && 1)
    goto L717;
  goto L36;
 L717:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; if ((GET_CODE (operands[1]) == CONST_INT
    && ((INTVAL (operands[1]) + 0x80) & ~0xff) == 0)) return 169; }
  x2 = XEXP (x1, 0);
  goto L36;
 L37:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; return 11; }
  x2 = XEXP (x1, 0);
  goto L41;
 L42:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 12; }
  x2 = XEXP (x1, 0);
  goto L55;
 L694:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LSHIFTRT && GET_MODE (x2) == SImode && 1)
    goto L695;
  if (GET_CODE (x2) == ASHIFTRT && GET_MODE (x2) == SImode && 1)
    goto L709;
 L56:
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 14; }
  goto L67;
 L695:
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    { recog_operand[1] = x3; goto L696; }
  goto L56;
 L696:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 24 && 1)
    if ((GET_CODE (operands[0]) == CONST_INT
    && (INTVAL (operands[0]) & ~0xff) == 0)) return 166;
  goto L56;
 L709:
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    { recog_operand[1] = x3; goto L710; }
  goto L56;
 L710:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 24 && 1)
    if ((GET_CODE (operands[0]) == CONST_INT
    && ((INTVAL (operands[0]) + 0x80) & ~0xff) == 0)) return 168;
  goto L56;
 L68:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[0] = x2; goto L69; }
  goto L8;
 L69:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 17; }
  goto L8;
 L81:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[0] = x2; goto L82; }
  goto L8;
 L82:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 20; }
  goto L8;
 L86:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    { recog_operand[0] = x2; goto L87; }
 L128:
  if (nonimmediate_operand (x2, HImode))
    { recog_operand[0] = x2; goto L129; }
 L94:
  if (nonimmediate_operand (x2, SImode))
    { recog_operand[0] = x2; goto L95; }
  goto L899;
 L87:
  x2 = XEXP (x1, 1);
  if (x2 == const1_rtx && 1)
    goto L88;
  x2 = XEXP (x1, 0);
  goto L128;
 L88:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == MINUS && GET_MODE (x2) == SImode && 1)
    goto L89;
 L124:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (GET_CODE (operands[1]) == CONST_INT) return 25; }
  x2 = XEXP (x1, 0);
  goto L128;
 L89:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 7 && 1)
    goto L106;
  goto L124;
 L106:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == AND && GET_MODE (x3) == SImode && 1)
    goto L107;
 L90:
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; return 21; }
  goto L124;
 L107:
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    { recog_operand[1] = x4; goto L108; }
  goto L90;
 L108:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XINT (x4, 0) == 7 && 1)
    return 23;
  goto L90;
 L129:
  x2 = XEXP (x1, 1);
  if (x2 == const1_rtx && 1)
    goto L130;
  x2 = XEXP (x1, 0);
  goto L94;
 L130:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (GET_CODE (operands[1]) == CONST_INT) return 26; }
  x2 = XEXP (x1, 0);
  goto L94;
 L95:
  x2 = XEXP (x1, 1);
  if (x2 == const1_rtx && 1)
    goto L96;
  goto L899;
 L96:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == MINUS && GET_MODE (x2) == SImode && 1)
    goto L97;
 L136:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (GET_CODE (operands[1]) == CONST_INT) return 27; }
  goto L899;
 L97:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 31 && 1)
    goto L116;
  goto L136;
 L116:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == AND && GET_MODE (x3) == SImode && 1)
    goto L117;
 L98:
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; return 22; }
  goto L136;
 L117:
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    { recog_operand[1] = x4; goto L118; }
  goto L98;
 L118:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XINT (x4, 0) == 31 && 1)
    return 24;
  goto L98;
 L140:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LSHIFTRT && GET_MODE (x2) == QImode && 1)
    goto L141;
  goto L8;
 L141:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    { recog_operand[0] = x3; goto L142; }
  goto L8;
 L142:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == 7 && 1)
    return 28;
  goto L8;
 L146:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SIGN_EXTEND && GET_MODE (x2) == SImode && 1)
    goto L147;
  goto L8;
 L147:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == SIGN_EXTEND && GET_MODE (x3) == HImode && 1)
    goto L148;
  goto L8;
 L148:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, QImode))
    { recog_operand[0] = x4; goto L149; }
  goto L8;
 L149:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if ((GET_CODE (operands[1]) == CONST_INT
    && (unsigned) INTVAL (operands[1]) < 0x100
    && exact_log2 (INTVAL (operands[1])) >= 0)) return 29; }
  goto L8;
 L900:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    { recog_operand[0] = x2; goto L901; }
 L920:
  if (nonimmediate_operand (x2, SImode))
    { recog_operand[0] = x2; goto L921; }
  goto L8;
 L901:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L902; }
  x2 = XEXP (x1, 0);
  goto L920;
 L902:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT) return 202; }
  x2 = XEXP (x1, 0);
  goto L920;
 L921:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L922; }
  goto L8;
 L922:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT) return 205; }
  goto L8;
 L906:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == ZERO_EXTRACT && GET_MODE (x2) == SImode && 1)
    goto L907;
  goto L8;
 L907:
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    { recog_operand[0] = x3; goto L908; }
 L927:
  if (nonimmediate_operand (x3, SImode))
    { recog_operand[0] = x3; goto L928; }
  goto L8;
 L908:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; goto L909; }
  x3 = XEXP (x2, 0);
  goto L927;
 L909:
  x3 = XEXP (x2, 2);
  if (general_operand (x3, SImode))
    { recog_operand[2] = x3; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT) return 203; }
  x3 = XEXP (x2, 0);
  goto L927;
 L928:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; goto L929; }
  goto L8;
 L929:
  x3 = XEXP (x2, 2);
  if (general_operand (x3, SImode))
    { recog_operand[2] = x3; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT) return 206; }
  goto L8;
 L913:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == ZERO_EXTRACT && GET_MODE (x2) == SImode && 1)
    goto L914;
  goto L8;
 L914:
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    { recog_operand[0] = x3; goto L915; }
 L934:
  if (nonimmediate_operand (x3, SImode))
    { recog_operand[0] = x3; goto L935; }
  goto L8;
 L915:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; goto L916; }
  x3 = XEXP (x2, 0);
  goto L934;
 L916:
  x3 = XEXP (x2, 2);
  if (general_operand (x3, SImode))
    { recog_operand[2] = x3; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT) return 204; }
  x3 = XEXP (x2, 0);
  goto L934;
 L935:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; goto L936; }
  goto L8;
 L936:
  x3 = XEXP (x2, 2);
  if (general_operand (x3, SImode))
    { recog_operand[2] = x3; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT) return 207; }
  goto L8;
 ret0: return -1;
}

int
recog_2 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L990:
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
 switch (GET_CODE (x2))
  {
  case EQ:
  if (1)
    goto L991;
  break;
  case NE:
  if (1)
    goto L1000;
  break;
  case GT:
  if (1)
    goto L1009;
  break;
  case GTU:
  if (1)
    goto L1018;
  break;
  case LT:
  if (1)
    goto L1027;
  break;
  case LTU:
  if (1)
    goto L1036;
  break;
  case GE:
  if (1)
    goto L1045;
  break;
  case GEU:
  if (1)
    goto L1054;
  break;
  case LE:
  if (1)
    goto L1063;
  break;
  case LEU:
  if (1)
    goto L1072;
  break;
  }
  goto ret0;
 L991:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L992;
  goto ret0;
 L992:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L993;
  goto ret0;
 L993:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L994;
  if (x2 == pc_rtx && 1)
    goto L1084;
  goto ret0;
 L994:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L995; }
  goto ret0;
 L995:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 218;
  goto ret0;
 L1084:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1085;
  goto ret0;
 L1085:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 228; }
  goto ret0;
 L1000:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1001;
  goto ret0;
 L1001:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1002;
  goto ret0;
 L1002:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1003;
  if (x2 == pc_rtx && 1)
    goto L1093;
  goto ret0;
 L1003:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1004; }
  goto ret0;
 L1004:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 219;
  goto ret0;
 L1093:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1094;
  goto ret0;
 L1094:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 229; }
  goto ret0;
 L1009:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1010;
  goto ret0;
 L1010:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1011;
  goto ret0;
 L1011:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1012;
  if (x2 == pc_rtx && 1)
    goto L1102;
  goto ret0;
 L1012:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1013; }
  goto ret0;
 L1013:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 220;
  goto ret0;
 L1102:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1103;
  goto ret0;
 L1103:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 230; }
  goto ret0;
 L1018:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1019;
  goto ret0;
 L1019:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1020;
  goto ret0;
 L1020:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1021;
  if (x2 == pc_rtx && 1)
    goto L1111;
  goto ret0;
 L1021:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1022; }
  goto ret0;
 L1022:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 221;
  goto ret0;
 L1111:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1112;
  goto ret0;
 L1112:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 231; }
  goto ret0;
 L1027:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1028;
  goto ret0;
 L1028:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1029;
  goto ret0;
 L1029:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1030;
  if (x2 == pc_rtx && 1)
    goto L1120;
  goto ret0;
 L1030:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1031; }
  goto ret0;
 L1031:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 222;
  goto ret0;
 L1120:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1121;
  goto ret0;
 L1121:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 232; }
  goto ret0;
 L1036:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1037;
  goto ret0;
 L1037:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1038;
  goto ret0;
 L1038:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1039;
  if (x2 == pc_rtx && 1)
    goto L1129;
  goto ret0;
 L1039:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1040; }
  goto ret0;
 L1040:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 223;
  goto ret0;
 L1129:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1130;
  goto ret0;
 L1130:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 233; }
  goto ret0;
 L1045:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1046;
  goto ret0;
 L1046:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1047;
  goto ret0;
 L1047:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1048;
  if (x2 == pc_rtx && 1)
    goto L1138;
  goto ret0;
 L1048:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1049; }
  goto ret0;
 L1049:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 224;
  goto ret0;
 L1138:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1139;
  goto ret0;
 L1139:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 234; }
  goto ret0;
 L1054:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1055;
  goto ret0;
 L1055:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1056;
  goto ret0;
 L1056:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1057;
  if (x2 == pc_rtx && 1)
    goto L1147;
  goto ret0;
 L1057:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1058; }
  goto ret0;
 L1058:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 225;
  goto ret0;
 L1147:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1148;
  goto ret0;
 L1148:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 235; }
  goto ret0;
 L1063:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1064;
  goto ret0;
 L1064:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1065;
  goto ret0;
 L1065:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1066;
  if (x2 == pc_rtx && 1)
    goto L1156;
  goto ret0;
 L1066:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1067; }
  goto ret0;
 L1067:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 226;
  goto ret0;
 L1156:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1157;
  goto ret0;
 L1157:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 236; }
  goto ret0;
 L1072:
  x3 = XEXP (x2, 0);
  if (x3 == cc0_rtx && 1)
    goto L1073;
  goto ret0;
 L1073:
  x3 = XEXP (x2, 1);
  if (x3 == const0_rtx && 1)
    goto L1074;
  goto ret0;
 L1074:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1075;
  if (x2 == pc_rtx && 1)
    goto L1165;
  goto ret0;
 L1075:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; goto L1076; }
  goto ret0;
 L1076:
  x2 = XEXP (x1, 2);
  if (x2 == pc_rtx && 1)
    return 227;
  goto ret0;
 L1165:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1166;
  goto ret0;
 L1166:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[0] = x3; return 237; }
  goto ret0;
 ret0: return -1;
}

int
recog_3 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L197:
  x1 = XEXP (x0, 1);
 switch (GET_CODE (x1))
  {
  case TRUNCATE:
  if (GET_MODE (x1) == QImode && 1)
    goto L198;
  break;
  case FIX:
  if (GET_MODE (x1) == QImode && 1)
    goto L290;
  break;
  case PLUS:
  if (GET_MODE (x1) == QImode && 1)
    goto L344;
  break;
  case MINUS:
  if (GET_MODE (x1) == QImode && 1)
    goto L397;
  break;
  case AND:
  if (GET_MODE (x1) == QImode && 1)
    goto L580;
  break;
  case IOR:
  if (GET_MODE (x1) == QImode && 1)
    goto L607;
  break;
  case XOR:
  if (GET_MODE (x1) == QImode && 1)
    goto L622;
  break;
  case NEG:
  if (GET_MODE (x1) == QImode && 1)
    goto L635;
  break;
  case NOT:
  if (GET_MODE (x1) == QImode && 1)
    goto L679;
  break;
  case ASHIFT:
  if (GET_MODE (x1) == QImode && 1)
    goto L731;
  break;
  case ASHIFTRT:
  if (GET_MODE (x1) == QImode && 1)
    goto L746;
  break;
  case LSHIFT:
  if (GET_MODE (x1) == QImode && 1)
    goto L761;
  break;
  case LSHIFTRT:
  if (GET_MODE (x1) == QImode && 1)
    goto L776;
  break;
  case ROTATE:
  if (GET_MODE (x1) == QImode && 1)
    goto L791;
  break;
  case ROTATERT:
  if (GET_MODE (x1) == QImode && 1)
    goto L806;
  break;
  case EQ:
  if (1)
    goto L940;
  break;
  case NE:
  if (1)
    goto L945;
  break;
  case GT:
  if (1)
    goto L950;
  break;
  case GTU:
  if (1)
    goto L955;
  break;
  case LT:
  if (1)
    goto L960;
  break;
  case LTU:
  if (1)
    goto L965;
  break;
  case GE:
  if (1)
    goto L970;
  break;
  case GEU:
  if (1)
    goto L975;
  break;
  case LE:
  if (1)
    goto L980;
  break;
  case LEU:
  if (1)
    goto L985;
  break;
  }
 L175:
  if (general_operand (x1, QImode))
    { recog_operand[1] = x1; return 36; }
  goto ret0;
 L198:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; return 43; }
 L202:
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 44; }
  goto L175;
 L290:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 73; }
 L302:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 76; }
  goto L175;
 L344:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L345; }
  goto L175;
 L345:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 85; }
  goto L175;
 L397:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L398; }
  goto L175;
 L398:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 97; }
  goto L175;
 L580:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L581; }
  goto L175;
 L581:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 137; }
  goto L175;
 L607:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L608; }
  goto L175;
 L608:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 142; }
  goto L175;
 L622:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L623; }
  goto L175;
 L623:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 145; }
  goto L175;
 L635:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 148; }
  goto L175;
 L679:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 163; }
  goto L175;
 L731:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L732; }
  goto L175;
 L732:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 172; }
  goto L175;
 L746:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L747; }
  goto L175;
 L747:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 175; }
  goto L175;
 L761:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L762; }
  goto L175;
 L762:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 178; }
  goto L175;
 L776:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L777; }
  goto L175;
 L777:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 181; }
  goto L175;
 L791:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L792; }
  goto L175;
 L792:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 184; }
  goto L175;
 L806:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L807; }
  goto L175;
 L807:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[2] = x2; return 187; }
  goto L175;
 L940:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L941;
  goto L175;
 L941:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 208;
  goto L175;
 L945:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L946;
  goto L175;
 L946:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 209;
  goto L175;
 L950:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L951;
  goto L175;
 L951:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 210;
  goto L175;
 L955:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L956;
  goto L175;
 L956:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 211;
  goto L175;
 L960:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L961;
  goto L175;
 L961:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 212;
  goto L175;
 L965:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L966;
  goto L175;
 L966:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 213;
  goto L175;
 L970:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L971;
  goto L175;
 L971:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 214;
  goto L175;
 L975:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L976;
  goto L175;
 L976:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 215;
  goto L175;
 L980:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L981;
  goto L175;
 L981:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 216;
  goto L175;
 L985:
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L986;
  goto L175;
 L986:
  x2 = XEXP (x1, 1);
  if (x2 == const0_rtx && 1)
    return 217;
  goto L175;
 ret0: return -1;
}

int
recog_4 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L205:
  x1 = XEXP (x0, 1);
 switch (GET_CODE (x1))
  {
  case TRUNCATE:
  if (GET_MODE (x1) == HImode && 1)
    goto L206;
  break;
  case ZERO_EXTEND:
  if (GET_MODE (x1) == HImode && 1)
    goto L214;
  break;
  case SIGN_EXTEND:
  if (GET_MODE (x1) == HImode && 1)
    goto L226;
  break;
  case FIX:
  if (GET_MODE (x1) == HImode && 1)
    goto L294;
  break;
  case PLUS:
  if (GET_MODE (x1) == HImode && 1)
    goto L333;
  break;
  case MINUS:
  if (GET_MODE (x1) == HImode && 1)
    goto L386;
  break;
  case MULT:
  if (GET_MODE (x1) == HImode && 1)
    goto L428;
  break;
  case UMULT:
  if (GET_MODE (x1) == HImode && 1)
    goto L443;
  break;
  case DIV:
  if (GET_MODE (x1) == HImode && 1)
    goto L478;
  break;
  case UDIV:
  if (GET_MODE (x1) == HImode && 1)
    goto L493;
  break;
  case MOD:
  if (GET_MODE (x1) == HImode && 1)
    goto L528;
  break;
  case UMOD:
  if (GET_MODE (x1) == HImode && 1)
    goto L538;
  break;
  case AND:
  if (GET_MODE (x1) == HImode && 1)
    goto L575;
  break;
  case IOR:
  if (GET_MODE (x1) == HImode && 1)
    goto L602;
  break;
  case XOR:
  if (GET_MODE (x1) == HImode && 1)
    goto L617;
  break;
  case NEG:
  if (GET_MODE (x1) == HImode && 1)
    goto L631;
  break;
  case NOT:
  if (GET_MODE (x1) == HImode && 1)
    goto L675;
  break;
  case ASHIFT:
  if (GET_MODE (x1) == HImode && 1)
    goto L726;
  break;
  case ASHIFTRT:
  if (GET_MODE (x1) == HImode && 1)
    goto L741;
  break;
  case LSHIFT:
  if (GET_MODE (x1) == HImode && 1)
    goto L756;
  break;
  case LSHIFTRT:
  if (GET_MODE (x1) == HImode && 1)
    goto L771;
  break;
  case ROTATE:
  if (GET_MODE (x1) == HImode && 1)
    goto L786;
  break;
  case ROTATERT:
  if (GET_MODE (x1) == HImode && 1)
    goto L801;
  break;
  }
 L168:
  if (general_operand (x1, HImode))
    { recog_operand[1] = x1; return 34; }
  goto ret0;
 L206:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; return 45; }
  goto L168;
 L214:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 50; }
  goto L168;
 L226:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 53; }
  goto L168;
 L294:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 74; }
 L306:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 77; }
  goto L168;
 L333:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L334; }
  goto L168;
 L334:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 83; }
  goto L168;
 L386:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L387; }
  goto L168;
 L387:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 95; }
  goto L168;
 L428:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L429; }
  goto L168;
 L429:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 105; }
  goto L168;
 L443:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L444; }
  goto L168;
 L444:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 108; }
  goto L168;
 L478:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L479; }
 L483:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L484; }
  goto L168;
 L479:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 117; }
  x2 = XEXP (x1, 0);
  goto L483;
 L484:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 118; }
  goto L168;
 L493:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L494; }
 L498:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L499; }
  goto L168;
 L494:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 120; }
  x2 = XEXP (x1, 0);
  goto L498;
 L499:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 121; }
  goto L168;
 L528:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L529; }
 L533:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L534; }
  goto L168;
 L529:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 129; }
  x2 = XEXP (x1, 0);
  goto L533;
 L534:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 130; }
  goto L168;
 L538:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L539; }
 L543:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L544; }
  goto L168;
 L539:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 131; }
  x2 = XEXP (x1, 0);
  goto L543;
 L544:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 132; }
  goto L168;
 L575:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L576; }
  goto L168;
 L576:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 136; }
  goto L168;
 L602:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L603; }
  goto L168;
 L603:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 141; }
  goto L168;
 L617:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L618; }
  goto L168;
 L618:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 144; }
  goto L168;
 L631:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 147; }
  goto L168;
 L675:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 162; }
  goto L168;
 L726:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L727; }
  goto L168;
 L727:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 171; }
  goto L168;
 L741:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L742; }
  goto L168;
 L742:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 174; }
  goto L168;
 L756:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L757; }
  goto L168;
 L757:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 177; }
  goto L168;
 L771:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L772; }
  goto L168;
 L772:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 180; }
  goto L168;
 L786:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L787; }
  goto L168;
 L787:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 183; }
  goto L168;
 L801:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L802; }
  goto L168;
 L802:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 186; }
  goto L168;
 ret0: return -1;
}

int
recog_5 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L209:
  x1 = XEXP (x0, 1);
 switch (GET_CODE (x1))
  {
  case ZERO_EXTEND:
  if (GET_MODE (x1) == SImode && 1)
    goto L210;
  break;
  case SIGN_EXTEND:
  if (GET_MODE (x1) == SImode && 1)
    goto L222;
  break;
  case FIX:
  if (GET_MODE (x1) == SImode && 1)
    goto L298;
  break;
  case PLUS:
  if (GET_MODE (x1) == SImode && 1)
    goto L322;
  break;
  case MINUS:
  if (GET_MODE (x1) == SImode && 1)
    goto L375;
  break;
  case MULT:
  if (GET_MODE (x1) == SImode && 1)
    goto L433;
  break;
  case UMULT:
  if (GET_MODE (x1) == SImode && 1)
    goto L448;
  break;
  case DIV:
  if (GET_MODE (x1) == SImode && 1)
    goto L488;
  break;
  case UDIV:
  if (GET_MODE (x1) == SImode && 1)
    goto L503;
  break;
  case AND:
  if (GET_MODE (x1) == SImode && 1)
    goto L585;
  break;
  case IOR:
  if (GET_MODE (x1) == SImode && 1)
    goto L597;
  break;
  case XOR:
  if (GET_MODE (x1) == SImode && 1)
    goto L612;
  break;
  case NEG:
  if (GET_MODE (x1) == SImode && 1)
    goto L627;
  break;
  case NOT:
  if (GET_MODE (x1) == SImode && 1)
    goto L671;
  break;
  case ASHIFTRT:
  if (GET_MODE (x1) == SImode && 1)
    goto L683;
  break;
  case LSHIFTRT:
  if (GET_MODE (x1) == SImode && 1)
    goto L688;
  break;
  case ASHIFT:
  if (GET_MODE (x1) == SImode && 1)
    goto L721;
  break;
  case LSHIFT:
  if (GET_MODE (x1) == SImode && 1)
    goto L751;
  break;
  case ROTATE:
  if (GET_MODE (x1) == SImode && 1)
    goto L781;
  break;
  case ROTATERT:
  if (GET_MODE (x1) == SImode && 1)
    goto L796;
  break;
  case ZERO_EXTRACT:
  if (GET_MODE (x1) == SImode && 1)
    goto L835;
  break;
  case SIGN_EXTRACT:
  if (GET_MODE (x1) == SImode && 1)
    goto L829;
  break;
  }
 L194:
  if (address_operand (x1, QImode))
    { recog_operand[1] = x1; return 42; }
  goto ret0;
 L210:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 49; }
 L218:
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 51; }
  goto L194;
 L222:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 52; }
 L230:
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; if (TARGET_68020) return 54; }
  goto L194;
 L298:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 75; }
 L310:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 78; }
 L314:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 79; }
 L318:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 80; }
  goto L194;
 L322:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L328; }
  goto L194;
 L328:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == SIGN_EXTEND && GET_MODE (x2) == SImode && 1)
    goto L329;
 L323:
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 81; }
  goto L194;
 L329:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    { recog_operand[2] = x3; return 82; }
  goto L323;
 L375:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L381; }
  goto L194;
 L381:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == SIGN_EXTEND && GET_MODE (x2) == SImode && 1)
    goto L382;
 L376:
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 93; }
  goto L194;
 L382:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    { recog_operand[2] = x3; return 94; }
  goto L376;
 L433:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L434; }
 L438:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L439; }
  goto L194;
 L434:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 106; }
  x2 = XEXP (x1, 0);
  goto L438;
 L439:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_68020) return 107; }
  goto L194;
 L448:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; goto L449; }
 L453:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L454; }
  goto L194;
 L449:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[2] = x2; return 109; }
  x2 = XEXP (x1, 0);
  goto L453;
 L454:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_68020) return 110; }
  goto L194;
 L488:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L489; }
  goto L194;
 L489:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_68020) return 119; }
  goto L194;
 L503:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L504; }
  goto L194;
 L504:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_68020) return 122; }
  goto L194;
 L585:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == ZERO_EXTEND && GET_MODE (x2) == SImode && 1)
    goto L586;
 L570:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L571; }
  goto L194;
 L586:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, HImode))
    { recog_operand[1] = x3; goto L587; }
 L592:
  if (general_operand (x3, QImode))
    { recog_operand[1] = x3; goto L593; }
  goto L570;
 L587:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (GET_CODE (operands[2]) == CONST_INT
   && (unsigned int) INTVAL (operands[2]) < (1 << GET_MODE_BITSIZE (HImode))) return 138; }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L592;
 L593:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (GET_CODE (operands[2]) == CONST_INT
   && (unsigned int) INTVAL (operands[2]) < (1 << GET_MODE_BITSIZE (QImode))) return 139; }
  x2 = XEXP (x1, 0);
  goto L570;
 L571:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 135; }
  goto L194;
 L597:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L598; }
  goto L194;
 L598:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 140; }
  goto L194;
 L612:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L613; }
  goto L194;
 L613:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 143; }
  goto L194;
 L627:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; return 146; }
  goto L194;
 L671:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; return 161; }
  goto L194;
 L683:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    { recog_operand[1] = x2; goto L684; }
 L736:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L737; }
  goto L194;
 L684:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XINT (x2, 0) == 24 && 1)
    if (GET_CODE (XEXP (operands[1], 0)) != POST_INC
   && GET_CODE (XEXP (operands[1], 0)) != PRE_DEC) return 164;
  x2 = XEXP (x1, 0);
  goto L736;
 L737:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 173; }
  goto L194;
 L688:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    { recog_operand[1] = x2; goto L689; }
 L766:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L767; }
  goto L194;
 L689:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XINT (x2, 0) == 24 && 1)
    if (GET_CODE (XEXP (operands[1], 0)) != POST_INC
   && GET_CODE (XEXP (operands[1], 0)) != PRE_DEC) return 165;
  x2 = XEXP (x1, 0);
  goto L766;
 L767:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 179; }
  goto L194;
 L721:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L722; }
  goto L194;
 L722:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 170; }
  goto L194;
 L751:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L752; }
  goto L194;
 L752:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 176; }
  goto L194;
 L781:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L782; }
  goto L194;
 L782:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 182; }
  goto L194;
 L796:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L797; }
  goto L194;
 L797:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 185; }
  goto L194;
 L835:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    { recog_operand[1] = x2; goto L836; }
 L817:
  if (nonimmediate_operand (x2, SImode))
    { recog_operand[1] = x2; goto L818; }
  goto L194;
 L836:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; goto L837; }
  x2 = XEXP (x1, 0);
  goto L817;
 L837:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD) return 192; }
  x2 = XEXP (x1, 0);
  goto L817;
 L818:
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    { recog_operand[2] = x2; goto L819; }
 L877:
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; goto L878; }
  goto L194;
 L819:
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[2]) == CONST_INT
   && (INTVAL (operands[2]) == 8 || INTVAL (operands[2]) == 16)
   && GET_CODE (operands[3]) == CONST_INT
   && INTVAL (operands[3]) % INTVAL (operands[2]) == 0
   && (GET_CODE (operands[1]) == REG
       || ! mode_dependent_address_p (XEXP (operands[1], 0)))) return 189; }
  x2 = XEXP (x1, 1);
  goto L877;
 L878:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD) return 198; }
  goto L194;
 L829:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    { recog_operand[1] = x2; goto L830; }
 L823:
  if (nonimmediate_operand (x2, SImode))
    { recog_operand[1] = x2; goto L824; }
  goto L194;
 L830:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; goto L831; }
  x2 = XEXP (x1, 0);
  goto L823;
 L831:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD) return 191; }
  x2 = XEXP (x1, 0);
  goto L823;
 L824:
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    { recog_operand[2] = x2; goto L825; }
 L871:
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; goto L872; }
  goto L194;
 L825:
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[2]) == CONST_INT
   && (INTVAL (operands[2]) == 8 || INTVAL (operands[2]) == 16)
   && GET_CODE (operands[3]) == CONST_INT
   && INTVAL (operands[3]) % INTVAL (operands[2]) == 0
   && (GET_CODE (operands[1]) == REG
       || ! mode_dependent_address_p (XEXP (operands[1], 0)))) return 190; }
  x2 = XEXP (x1, 1);
  goto L871;
 L872:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD) return 197; }
  goto L194;
 ret0: return -1;
}

int
recog_6 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L7:
  x1 = XEXP (x0, 0);
  if (x1 == cc0_rtx && 1)
    goto L35;
  if (GET_CODE (x1) == STRICT_LOW_PART && 1)
    goto L178;
  if (x1 == pc_rtx && 1)
    goto L989;
 L1222:
  if (1)
    { recog_operand[0] = x1; goto L1223; }
 L174:
 switch (GET_MODE (x1))
  {
  case QImode:
  if (general_operand (x1, QImode))
    { recog_operand[0] = x1; goto L197; }
  break;
 L167:
  case HImode:
  if (general_operand (x1, HImode))
    { recog_operand[0] = x1; goto L205; }
  break;
  case SImode:
  if (GET_CODE (x1) == ZERO_EXTRACT && 1)
    goto L840;
 L158:
  if (general_operand (x1, SImode))
    { recog_operand[0] = x1; goto L159; }
 L161:
  if (push_operand (x1, SImode))
    { recog_operand[0] = x1; goto L162; }
 L164:
  if (general_operand (x1, SImode))
    { recog_operand[0] = x1; goto L165; }
 L190:
  if (push_operand (x1, SImode))
    { recog_operand[0] = x1; goto L191; }
 L193:
  if (general_operand (x1, SImode))
    { recog_operand[0] = x1; goto L209; }
  break;
  case DImode:
  if (push_operand (x1, DImode))
    { recog_operand[0] = x1; goto L5; }
 L187:
  if (general_operand (x1, DImode))
    { recog_operand[0] = x1; goto L188; }
  break;
  case SFmode:
  if (general_operand (x1, SFmode))
    { recog_operand[0] = x1; goto L182; }
 L240:
  if (register_operand (x1, SFmode))
    { recog_operand[0] = x1; goto L241; }
 L244:
  if (general_operand (x1, SFmode))
    { recog_operand[0] = x1; goto L245; }
 L1242:
  if (register_operand (x1, SFmode))
    { recog_operand[0] = x1; goto L1243; }
  break;
  case DFmode:
  if (push_operand (x1, DFmode))
    { recog_operand[0] = x1; goto L2; }
 L184:
  if (general_operand (x1, DFmode))
    { recog_operand[0] = x1; goto L233; }
 L256:
  if (register_operand (x1, DFmode))
    { recog_operand[0] = x1; goto L257; }
 L260:
  if (general_operand (x1, DFmode))
    { recog_operand[0] = x1; goto L261; }
 L1228:
  if (register_operand (x1, DFmode))
    { recog_operand[0] = x1; goto L1229; }
  break;
  }
  goto ret0;
 L35:
  tem = recog_1 (x0, insn);
  if (tem >= 0) return tem;
  goto L1222;
 L178:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[0] = x2; goto L349; }
 L171:
  if (general_operand (x2, HImode))
    { recog_operand[0] = x2; goto L338; }
  goto L1222;
 L349:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PLUS && GET_MODE (x1) == QImode && 1)
    goto L350;
  if (GET_CODE (x1) == MINUS && GET_MODE (x1) == QImode && 1)
    goto L403;
 L179:
  if (general_operand (x1, QImode))
    { recog_operand[1] = x1; return 37; }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L171;
 L350:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    goto L351;
  goto L179;
 L351:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 86; }
  goto L179;
 L403:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    goto L404;
  goto L179;
 L404:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; return 98; }
  goto L179;
 L338:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PLUS && GET_MODE (x1) == HImode && 1)
    goto L339;
  if (GET_CODE (x1) == MINUS && GET_MODE (x1) == HImode && 1)
    goto L392;
 L172:
  if (general_operand (x1, HImode))
    { recog_operand[1] = x1; return 35; }
  x1 = XEXP (x0, 0);
  goto L1222;
 L339:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    goto L340;
  goto L172;
 L340:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 84; }
  goto L172;
 L392:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    goto L393;
  goto L172;
 L393:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; return 96; }
  goto L172;
 L989:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L990;
  if (GET_CODE (x1) == LABEL_REF && 1)
    goto L1179;
  x1 = XEXP (x0, 0);
  goto L1222;
 L990:
  tem = recog_2 (x0, insn);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1222;
 L1179:
  x2 = XEXP (x1, 0);
  if (1)
    { recog_operand[0] = x2; return 242; }
  x1 = XEXP (x0, 0);
  goto L1222;
 L1223:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L1224;
  x1 = XEXP (x0, 0);
  goto L174;
 L1224:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; goto L1225; }
  x1 = XEXP (x0, 0);
  goto L174;
 L1225:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; return 246; }
  x1 = XEXP (x0, 0);
  goto L174;
 L197:
  tem = recog_3 (x0, insn);
  if (tem >= 0) return tem;
  goto L167;
 L205:
  return recog_4 (x0, insn);
 L840:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    { recog_operand[0] = x2; goto L841; }
 L810:
  if (nonimmediate_operand (x2, SImode))
    { recog_operand[0] = x2; goto L811; }
  goto L158;
 L841:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L842; }
  x2 = XEXP (x1, 0);
  goto L810;
 L842:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; goto L843; }
  x2 = XEXP (x1, 0);
  goto L810;
 L843:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == XOR && GET_MODE (x1) == SImode && 1)
    goto L844;
  if (x1 == const0_rtx && 1)
    if (TARGET_68020 && TARGET_BITFIELD) return 194;
 L860:
  if (GET_CODE (x1) == CONST_INT && XINT (x1, 0) == -1 && 1)
    if (TARGET_68020 && TARGET_BITFIELD) return 195;
 L866:
  if (general_operand (x1, SImode))
    { recog_operand[3] = x1; if (TARGET_68020 && TARGET_BITFIELD) return 196; }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L810;
 L844:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == ZERO_EXTRACT && GET_MODE (x2) == SImode && 1)
    goto L845;
  goto L866;
 L845:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, recog_operand[0]) && 1)
    goto L846;
  goto L866;
 L846:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, recog_operand[1]) && 1)
    goto L847;
  goto L866;
 L847:
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, recog_operand[2]) && 1)
    goto L848;
  goto L866;
 L848:
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    { recog_operand[3] = x2; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[3]) == CONST_INT
   && (INTVAL (operands[3]) == -1
       || (GET_CODE (operands[1]) == CONST_INT
           && (~ INTVAL (operands[3]) & ((1 << INTVAL (operands[1]))- 1)) == 0))) return 193; }
  goto L866;
 L811:
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    { recog_operand[1] = x2; goto L812; }
 L882:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L883; }
  goto L158;
 L812:
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    { recog_operand[2] = x2; goto L813; }
  x2 = XEXP (x1, 1);
  goto L882;
 L813:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    { recog_operand[3] = x1; if (TARGET_68020 && TARGET_BITFIELD
   && GET_CODE (operands[1]) == CONST_INT
   && (INTVAL (operands[1]) == 8 || INTVAL (operands[1]) == 16)
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) % INTVAL (operands[1]) == 0
   && (GET_CODE (operands[0]) == REG
       || ! mode_dependent_address_p (XEXP (operands[0], 0)))) return 188; }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 1);
  goto L882;
 L883:
  x2 = XEXP (x1, 2);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; goto L884; }
  goto L158;
 L884:
  x1 = XEXP (x0, 1);
  if (x1 == const0_rtx && 1)
    if (TARGET_68020 && TARGET_BITFIELD) return 199;
 L890:
  if (GET_CODE (x1) == CONST_INT && XINT (x1, 0) == -1 && 1)
    if (TARGET_68020 && TARGET_BITFIELD) return 200;
 L896:
  if (general_operand (x1, SImode))
    { recog_operand[3] = x1; if (TARGET_68020 && TARGET_BITFIELD) return 201; }
  x1 = XEXP (x0, 0);
  goto L158;
 L159:
  x1 = XEXP (x0, 1);
  if (x1 == const0_rtx && 1)
    return 31;
  x1 = XEXP (x0, 0);
  goto L161;
 L162:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    { recog_operand[1] = x1; if (GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= -0x8000
   && INTVAL (operands[1]) < 0x8000) return 32; }
  x1 = XEXP (x0, 0);
  goto L164;
 L165:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    { recog_operand[1] = x1; return 33; }
  x1 = XEXP (x0, 0);
  goto L190;
 L191:
  x1 = XEXP (x0, 1);
  if (address_operand (x1, SImode))
    { recog_operand[1] = x1; return 41; }
  x1 = XEXP (x0, 0);
  goto L193;
 L209:
  return recog_5 (x0, insn);
 L5:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    { recog_operand[1] = x1; return 1; }
  x1 = XEXP (x0, 0);
  goto L187;
 L188:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    { recog_operand[1] = x1; return 40; }
  goto ret0;
 L182:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    { recog_operand[1] = x1; return 38; }
  x1 = XEXP (x0, 0);
  goto L240;
 L241:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == FLOAT_TRUNCATE && GET_MODE (x1) == SFmode && 1)
    goto L242;
  x1 = XEXP (x0, 0);
  goto L244;
 L242:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 59; }
  x1 = XEXP (x0, 0);
  goto L244;
 L245:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1242;
    }
 switch (GET_CODE (x1))
  {
  case FLOAT_TRUNCATE:
  if (1)
    goto L246;
  break;
  case FLOAT:
  if (1)
    goto L250;
  break;
  case FIX:
  if (1)
    goto L286;
  break;
  case PLUS:
  if (1)
    goto L365;
  break;
  case MINUS:
  if (1)
    goto L418;
  break;
  case MULT:
  if (1)
    goto L468;
  break;
  case DIV:
  if (1)
    goto L518;
  break;
  case NEG:
  if (1)
    goto L639;
  break;
  case ABS:
  if (1)
    goto L655;
  break;
  }
  x1 = XEXP (x0, 0);
  goto L1242;
 L246:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 60; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L250:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 62; }
 L254:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (TARGET_68881) return 63; }
 L266:
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; if (TARGET_68881) return 67; }
 L274:
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; if (TARGET_68881) return 69; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L286:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 72; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L365:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L366; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L366:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 91; }
 L371:
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 92; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L418:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L419; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L419:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 103; }
 L424:
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 104; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L468:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L469; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L469:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 115; }
 L474:
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 116; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L518:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L519; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L519:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 127; }
 L524:
  if (general_operand (x2, SFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 128; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L639:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 150; }
 L643:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 151; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L655:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 156; }
 L659:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 157; }
  x1 = XEXP (x0, 0);
  goto L1242;
 L1243:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    goto ret0;
  if (GET_CODE (x1) == PLUS && 1)
    goto L1244;
  if (GET_CODE (x1) == MINUS && 1)
    goto L1279;
  if (GET_CODE (x1) == MULT && 1)
    goto L1300;
  goto ret0;
 L1244:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == SFmode && 1)
    goto L1245;
 L1251:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L1252; }
  goto ret0;
 L1245:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SFmode))
    { recog_operand[1] = x3; goto L1246; }
  goto L1251;
 L1246:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1247; }
  goto L1251;
 L1247:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 251; }
  x2 = XEXP (x1, 0);
  goto L1251;
 L1252:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == SFmode && 1)
    goto L1253;
  goto ret0;
 L1253:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1254; }
  goto ret0;
 L1254:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 252; }
  goto ret0;
 L1279:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == SFmode && 1)
    goto L1280;
 L1265:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L1266; }
  goto ret0;
 L1280:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    { recog_operand[1] = x3; goto L1281; }
  goto L1265;
 L1281:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1282; }
  goto L1265;
 L1282:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 256; }
  x2 = XEXP (x1, 0);
  goto L1265;
 L1266:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == SFmode && 1)
    goto L1267;
  goto ret0;
 L1267:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1268; }
  goto ret0;
 L1268:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 254; }
  goto ret0;
 L1300:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PLUS && GET_MODE (x2) == SFmode && 1)
    goto L1301;
  if (GET_CODE (x2) == MINUS && GET_MODE (x2) == SFmode && 1)
    goto L1329;
 L1307:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; goto L1308; }
  goto ret0;
 L1301:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    { recog_operand[1] = x3; goto L1302; }
  goto L1307;
 L1302:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1303; }
  goto L1307;
 L1303:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 259; }
  x2 = XEXP (x1, 0);
  goto L1307;
 L1329:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    { recog_operand[1] = x3; goto L1330; }
  goto L1307;
 L1330:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1331; }
  goto L1307;
 L1331:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 263; }
  x2 = XEXP (x1, 0);
  goto L1307;
 L1308:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == PLUS && 1)
    goto L1309;
  if (GET_CODE (x2) == MINUS && 1)
    goto L1337;
  goto ret0;
 L1309:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1310; }
  goto ret0;
 L1310:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 260; }
  goto ret0;
 L1337:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    { recog_operand[2] = x3; goto L1338; }
  goto ret0;
 L1338:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 264; }
  goto ret0;
 L2:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    { recog_operand[1] = x1; return 0; }
  x1 = XEXP (x0, 0);
  goto L184;
 L233:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == FLOAT_EXTEND && GET_MODE (x1) == DFmode && 1)
    goto L234;
 L185:
  if (general_operand (x1, DFmode))
    { recog_operand[1] = x1; return 39; }
  x1 = XEXP (x0, 0);
  goto L256;
 L234:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 56; }
 L238:
  if (general_operand (x2, SFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 57; }
  goto L185;
 L257:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == FLOAT && GET_MODE (x1) == DFmode && 1)
    goto L258;
  x1 = XEXP (x0, 0);
  goto L260;
 L258:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 65; }
  x1 = XEXP (x0, 0);
  goto L260;
 L261:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1228;
    }
 switch (GET_CODE (x1))
  {
  case FLOAT:
  if (1)
    goto L262;
  break;
  case FIX:
  if (1)
    goto L282;
  break;
  case PLUS:
  if (1)
    goto L355;
  break;
  case MINUS:
  if (1)
    goto L408;
  break;
  case MULT:
  if (1)
    goto L458;
  break;
  case DIV:
  if (1)
    goto L508;
  break;
  case NEG:
  if (1)
    goto L647;
  break;
  case ABS:
  if (1)
    goto L663;
  break;
  }
  x1 = XEXP (x0, 0);
  goto L1228;
 L262:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (TARGET_68881) return 66; }
 L270:
  if (general_operand (x2, HImode))
    { recog_operand[1] = x2; if (TARGET_68881) return 68; }
 L278:
  if (general_operand (x2, QImode))
    { recog_operand[1] = x2; if (TARGET_68881) return 70; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L282:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 71; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L355:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L356; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L356:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 88; }
 L361:
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 89; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L408:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L409; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L409:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 100; }
 L414:
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 101; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L458:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L459; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L459:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 112; }
 L464:
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 113; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L508:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L509; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L509:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 124; }
 L514:
  if (general_operand (x2, DFmode))
    { recog_operand[2] = x2; if (TARGET_68881) return 125; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L647:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 153; }
 L651:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 154; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L663:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 159; }
 L667:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; if (TARGET_68881) return 160; }
  x1 = XEXP (x0, 0);
  goto L1228;
 L1229:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    goto ret0;
  if (GET_CODE (x1) == PLUS && 1)
    goto L1230;
  if (GET_CODE (x1) == MINUS && 1)
    goto L1272;
  if (GET_CODE (x1) == MULT && 1)
    goto L1286;
  goto ret0;
 L1230:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == DFmode && 1)
    goto L1231;
 L1237:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L1238; }
  goto ret0;
 L1231:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DFmode))
    { recog_operand[1] = x3; goto L1232; }
  goto L1237;
 L1232:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1233; }
  goto L1237;
 L1233:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 249; }
  x2 = XEXP (x1, 0);
  goto L1237;
 L1238:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == DFmode && 1)
    goto L1239;
  goto ret0;
 L1239:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1240; }
  goto ret0;
 L1240:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 250; }
  goto ret0;
 L1272:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == DFmode && 1)
    goto L1273;
 L1258:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L1259; }
  goto ret0;
 L1273:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    { recog_operand[1] = x3; goto L1274; }
  goto L1258;
 L1274:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1275; }
  goto L1258;
 L1275:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 255; }
  x2 = XEXP (x1, 0);
  goto L1258;
 L1259:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MULT && GET_MODE (x2) == DFmode && 1)
    goto L1260;
  goto ret0;
 L1260:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1261; }
  goto ret0;
 L1261:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 253; }
  goto ret0;
 L1286:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PLUS && GET_MODE (x2) == DFmode && 1)
    goto L1287;
  if (GET_CODE (x2) == MINUS && GET_MODE (x2) == DFmode && 1)
    goto L1315;
 L1293:
  if (general_operand (x2, DFmode))
    { recog_operand[1] = x2; goto L1294; }
  goto ret0;
 L1287:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    { recog_operand[1] = x3; goto L1288; }
  goto L1293;
 L1288:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1289; }
  goto L1293;
 L1289:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 257; }
  x2 = XEXP (x1, 0);
  goto L1293;
 L1315:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    { recog_operand[1] = x3; goto L1316; }
  goto L1293;
 L1316:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1317; }
  goto L1293;
 L1317:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    { recog_operand[3] = x2; if (TARGET_FPA) return 261; }
  x2 = XEXP (x1, 0);
  goto L1293;
 L1294:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == PLUS && 1)
    goto L1295;
  if (GET_CODE (x2) == MINUS && 1)
    goto L1323;
  goto ret0;
 L1295:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1296; }
  goto ret0;
 L1296:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 258; }
  goto ret0;
 L1323:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    { recog_operand[2] = x3; goto L1324; }
  goto ret0;
 L1324:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[3] = x3; if (TARGET_FPA) return 262; }
  goto ret0;
 ret0: return -1;
}

int
recog_7 (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L17:
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (x2 == cc0_rtx && 1)
    goto L60;
  if (x2 == pc_rtx && 1)
    goto L1170;
 L152:
  if (general_operand (x2, SImode))
    { recog_operand[0] = x2; goto L548; }
  goto ret0;
 L60:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MINUS && GET_MODE (x2) == DFmode && 1)
    goto L61;
  if (GET_CODE (x2) == MINUS && GET_MODE (x2) == SFmode && 1)
    goto L74;
 L18:
  if (general_operand (x2, SFmode))
    { recog_operand[0] = x2; goto L19; }
 L27:
  if (general_operand (x2, DFmode))
    { recog_operand[0] = x2; goto L28; }
  x2 = XEXP (x1, 0);
  goto L152;
 L61:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DFmode))
    { recog_operand[0] = x3; goto L62; }
  goto L18;
 L62:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DFmode))
    { recog_operand[1] = x3; goto L63; }
  goto L18;
 L63:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L64;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L18;
 L64:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 16; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L18;
 L74:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SFmode))
    { recog_operand[0] = x3; goto L75; }
  goto L18;
 L75:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SFmode))
    { recog_operand[1] = x3; goto L76; }
  goto L18;
 L76:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L77;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L18;
 L77:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[2] = x2; if (TARGET_FPA) return 19; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L18;
 L19:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L20;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L27;
 L20:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 6; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L27;
 L28:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L29;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L29:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; if (TARGET_FPA) return 9; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1170:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PLUS && GET_MODE (x2) == SImode && 1)
    goto L1171;
  if (GET_CODE (x2) == IF_THEN_ELSE && 1)
    goto L1184;
  x2 = XEXP (x1, 0);
  goto L152;
 L1171:
  x3 = XEXP (x2, 0);
  if (x3 == pc_rtx && 1)
    goto L1172;
  x2 = XEXP (x1, 0);
  goto L152;
 L1172:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, HImode))
    { recog_operand[0] = x3; goto L1173; }
  x2 = XEXP (x1, 0);
  goto L152;
 L1173:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1174;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1174:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1175:
  x3 = XEXP (x2, 0);
  if (1)
    { recog_operand[1] = x3; return 241; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1184:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == NE && 1)
    goto L1185;
  x2 = XEXP (x1, 0);
  goto L152;
 L1185:
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == MINUS && 1)
    goto L1186;
  x2 = XEXP (x1, 0);
  goto L152;
 L1186:
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != PLUS)
    {  x2 = XEXP (x1, 0);
    goto L152; }
  if (GET_MODE (x5) == HImode && 1)
    goto L1187;
  if (GET_MODE (x5) == SImode && 1)
    goto L1206;
  x2 = XEXP (x1, 0);
  goto L152;
 L1187:
  x6 = XEXP (x5, 0);
  if (general_operand (x6, HImode))
    { recog_operand[0] = x6; goto L1188; }
  x2 = XEXP (x1, 0);
  goto L152;
 L1188:
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT && XINT (x6, 0) == -1 && 1)
    goto L1189;
  x2 = XEXP (x1, 0);
  goto L152;
 L1189:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XINT (x5, 0) == -1 && 1)
    goto L1190;
  x2 = XEXP (x1, 0);
  goto L152;
 L1190:
  x4 = XEXP (x3, 1);
  if (x4 == const0_rtx && 1)
    goto L1191;
  x2 = XEXP (x1, 0);
  goto L152;
 L1191:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1192;
  x2 = XEXP (x1, 0);
  goto L152;
 L1192:
  x4 = XEXP (x3, 0);
  if (1)
    { recog_operand[1] = x4; goto L1193; }
  x2 = XEXP (x1, 0);
  goto L152;
 L1193:
  x3 = XEXP (x2, 2);
  if (x3 == pc_rtx && 1)
    goto L1194;
  x2 = XEXP (x1, 0);
  goto L152;
 L1194:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1195;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1195:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    goto L1196;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1196:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PLUS && GET_MODE (x2) == HImode && 1)
    goto L1197;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1197:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, recog_operand[0]) && 1)
    goto L1198;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1198:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == -1 && 1)
    return 243;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1206:
  x6 = XEXP (x5, 0);
  if (general_operand (x6, SImode))
    { recog_operand[0] = x6; goto L1207; }
  x2 = XEXP (x1, 0);
  goto L152;
 L1207:
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT && XINT (x6, 0) == -1 && 1)
    goto L1208;
  x2 = XEXP (x1, 0);
  goto L152;
 L1208:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XINT (x5, 0) == -1 && 1)
    goto L1209;
  x2 = XEXP (x1, 0);
  goto L152;
 L1209:
  x4 = XEXP (x3, 1);
  if (x4 == const0_rtx && 1)
    goto L1210;
  x2 = XEXP (x1, 0);
  goto L152;
 L1210:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1211;
  x2 = XEXP (x1, 0);
  goto L152;
 L1211:
  x4 = XEXP (x3, 0);
  if (1)
    { recog_operand[1] = x4; goto L1212; }
  x2 = XEXP (x1, 0);
  goto L152;
 L1212:
  x3 = XEXP (x2, 2);
  if (x3 == pc_rtx && 1)
    goto L1213;
  x2 = XEXP (x1, 0);
  goto L152;
 L1213:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1214;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1214:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    goto L1215;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1215:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PLUS && GET_MODE (x2) == SImode && 1)
    goto L1216;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1216:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, recog_operand[0]) && 1)
    goto L1217;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L1217:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XINT (x3, 0) == -1 && 1)
    return 244;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L152;
 L548:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == DIV && GET_MODE (x2) == SImode && 1)
    goto L549;
  if (GET_CODE (x2) == UDIV && GET_MODE (x2) == SImode && 1)
    goto L560;
 L153:
  if (general_operand (x2, SImode))
    { recog_operand[1] = x2; goto L154; }
  goto ret0;
 L549:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; goto L550; }
  goto L153;
 L550:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    { recog_operand[2] = x3; goto L551; }
  goto L153;
 L551:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L552;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L552:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[3] = x2; goto L553; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L553:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == MOD && GET_MODE (x2) == SImode && 1)
    goto L554;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L554:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, recog_operand[1]) && 1)
    goto L555;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L555:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, recog_operand[2]) && 1)
    if (TARGET_68020) return 133;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L560:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    { recog_operand[1] = x3; goto L561; }
  goto L153;
 L561:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    { recog_operand[2] = x3; goto L562; }
  goto L153;
 L562:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L563;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L563:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    { recog_operand[3] = x2; goto L564; }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L564:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == UMOD && GET_MODE (x2) == SImode && 1)
    goto L565;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L565:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, recog_operand[1]) && 1)
    goto L566;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L566:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, recog_operand[2]) && 1)
    if (TARGET_68020) return 134;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L153;
 L154:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L155;
  goto ret0;
 L155:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, recog_operand[1]) && 1)
    goto L156;
  goto ret0;
 L156:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, recog_operand[0]) && 1)
    return 30;
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx x1, x2, x3, x4, x5;
  rtx x6, x7, x8, x9, x10, x11;
  int tem;
 L0:
 switch (GET_CODE (x0))
  {
  case SET:
  if (1)
    goto L7;
  break;
  case PARALLEL:
  if (XVECLEN (x0, 0) == 2 && 1)
    goto L16;
  break;
  case CALL:
  if (1)
    goto L1219;
  break;
  case RETURN:
  if (1)
    if (0) return 247;
  break;
  }
  goto ret0;
 L7:
  return recog_6 (x0, insn);
 L16:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L17;
  goto ret0;
 L17:
  return recog_7 (x0, insn);
 L1219:
  x1 = XEXP (x0, 0);
  if (general_operand (x1, QImode))
    { recog_operand[0] = x1; goto L1220; }
  goto ret0;
 L1220:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    { recog_operand[1] = x1; return 245; }
  goto ret0;
 ret0: return -1;
}
