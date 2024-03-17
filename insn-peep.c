/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"

#include "rtl.h"

#include "regs.h"

extern rtx peep_operand[];

#define operands peep_operand

int
peephole (ins1)
     rtx ins1;
{
  rtx insn, x, pat;
  int i;
  insn = ins1;
  if (GET_CODE (insn) == CODE_LABEL) goto L248;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L248;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != REG) goto L248;
  if (GET_MODE (x) != SImode) goto L248;
  if (XINT (x, 0) != 15) goto L248;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L248;
  if (GET_MODE (x) != SImode) goto L248;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != REG) goto L248;
  if (GET_MODE (x) != SImode) goto L248;
  if (XINT (x, 0) != 15) goto L248;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L248;
  if (XINT (x, 0) != 4) goto L248;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L248; }
  while (GET_CODE (insn) == NOTE);
  if (GET_CODE (insn) == CODE_LABEL) goto L248;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L248;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, DFmode)) goto L248;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! register_operand (x, DFmode)) goto L248;
  if (! (FP_REG_P (operands[0]) && ! FP_REG_P (operands[1]))) goto L248;
  PATTERN (ins1) = gen_rtx (PARALLEL, VOIDmode, gen_rtvec_v (2, operands));
  insn = ins1;
  for (i = 0; i < 2; i++)
    if (GET_CODE (operands[i]) == CODE_LABEL)
      LABEL_NUSES (operands[i])++;
  INSN_CODE (insn) = 248;
  do insn = NEXT_INSN (insn);
  while (GET_CODE (insn) == NOTE);
  delete_insn (insn);
  return 1;
 L248:

  return 0;
}

rtx peep_operand[2];
