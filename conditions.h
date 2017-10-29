/* Definitions for condition code handling in final.c and output routines.
   Copyright (C) 1987 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY.  No author or distributor
accepts responsibility to anyone for the consequences of using it
or for whether it serves any particular purpose or works at all,
unless he says so in writing.  Refer to the GNU CC General Public
License for full details.

Everyone is granted permission to copy, modify and redistribute
GNU CC, but only under the conditions described in the
GNU CC General Public License.   A copy of this license is
supposed to have been given to you along with GNU CC so you
can know your rights and responsibilities.  It should be in a
file named COPYING.  Among other things, the copyright notice
and this notice must be preserved on all copies.  */


/* The variable cc_status says how to interpret the condition code.
   It is set by output routines for an instruction that sets the cc's
   and examined by output routines for jump instructions.

   cc_status contains two components named `value1' and `value2'
   that record two equivalent expressions for the values that the
   condition codes were set from.  (Either or both may be null if
   there is no useful expression to record.)  These fields are
   used for eliminating redundant test and compare instructions
   in the cases where the condition codes were already set by the
   previous instruction.

   cc_status.flags contains flags which say that the condition codes
   were set in a nonstandard manner.  The output of jump instructions
   uses these flags to compensate and produce the standard result
   with the nonstandard condition codes.  Standard flags are defined here.
   The tm- file can also define other machine-dependent flags.

   cc_status also contains a machine-dependent component `mdep'
   whose type, `CC_STATUS_MDEP', may be defined as a macro in the
   tm- file.  */

#ifndef CC_STATUS_MDEP
#define CC_STATUS_MDEP int
#endif

#ifndef CC_STATUS_MDEP_INIT
#define CC_STATUS_MDEP_INIT 0
#endif

typedef struct {int flags; rtx value1, value2; CC_STATUS_MDEP mdep;} CC_STATUS;

/* While outputting an insn as assembler code,
   this is the status BEFORE that insn.  */
extern CC_STATUS cc_prev_status;

/* While outputting an insn as assembler code,
   this is being altered to the status AFTER that insn.  */
extern CC_STATUS cc_status;

/* These are the machine-independent flags:  */

/* Set if the sign of the cc value is inverted:
   output a following jump-if-less as a jump-if-greater, etc.  */
#define CC_REVERSED 1

/* This bit means that the current setting of the N bit is bogus
   and conditional jumps should use the Z bit in its place.
   This state obtains when an extraction of a signed single-bit field
   or an arithmetic shift right of a byte by 7 bits
   is turned into a btst, because btst does not set the N bit.  */
#define CC_NOT_POSITIVE 2

/* This bit means that the current setting of the N bit is bogus
   and conditional jumps should pretend that the N bit is clear.
   Used after extraction of an unsigned bit
   or logical shift right of a byte by 7 bits is turned into a btst.
   The btst does not alter the N bit, but the result of that shift
   or extract is never negative.  */
#define CC_NOT_NEGATIVE 4

/* This bit means that the current setting of the overflow flag
   is bogus and conditional jumps should pretend there is no overflow.  */
#define CC_NO_OVERFLOW 010

/* This bit means that what ought to be in the Z bit
   should be tested as the complement of the N bit.  */
#define CC_Z_IN_NOT_N 020

/* This is how to initialize the variable cc_status.
   final does this at appropriate moments.  */

#define CC_STATUS_INIT  \
 (cc_status.flags = 0, cc_status.value1 = 0, cc_status.value2 = 0,  \
  CC_STATUS_MDEP_INIT)
