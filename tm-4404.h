#define MOTOROLA


#include "tm-m68000.h"

/* See tm-m68k.h.  0 means 68000 with no 68881.  */

#define TARGET_DEFAULT 0

#define STARTFILE_SPEC  "%{pg:/lib/Cwrapper.r%s}%{!pg:%{p:/lib/Cwrapper.r%s}%{!p:/lib/Cwrapper.r%s}}"
  
#define ASM_SPEC "+u"

#define LINK_SPEC "+b=1M"

#define LIB_SPEC "+l=clibs +l=cmathlib"

/* Names to predefine in the preprocessor for this target machine.  */

#define CPP_PREDEFINES "-Dtek -Dunix"

/* Uniflex uses \015 */
#undef TARGET_NEWLINE
#define TARGET_NEWLINE 015

#undef ASM_FILE_START
#define ASM_FILE_START(FILE) fprintf (FILE, "\tlib sysdef\015\tlib sysfloat\015");

#undef ASM_APP_ON
#define ASM_APP_ON ""

#undef ASM_APP_OFF
#define ASM_APP_OFF	""

#undef TEXT_SECTION_ASM_OP
#define TEXT_SECTION_ASM_OP "\ttext"

#undef DATA_SECTION_ASM_OP
#define DATA_SECTION_ASM_OP "\tdata"

#undef ASM_OUTPUT_LABEL
#define ASM_OUTPUT_LABEL(FILE,NAME)	\
  do { assemble_name (FILE, NAME); fputs ("\015", FILE); } while (0)

#undef ASM_GLOBALIZE_LABEL
#define ASM_GLOBALIZE_LABEL(FILE,NAME)	\
  do { fputs ("\tglobal ", FILE); assemble_name (FILE, NAME); fputs ("\015", FILE);} while (0)

#undef ASM_OUTPUT_INTERNAL_LABEL
#define ASM_OUTPUT_INTERNAL_LABEL(FILE,PREFIX,NUM)	\
  fprintf (FILE, "%s%d\015", PREFIX, NUM)


#undef ASM_OUTPUT_INT
#define ASM_OUTPUT_INT(FILE,VALUE)  \
( fprintf (FILE, "\tfqb "),			\
  output_addr_const (FILE, (VALUE)),		\
  fprintf (FILE, "\015"))

#undef ASM_OUTPUT_SHORT
#define ASM_OUTPUT_SHORT(FILE,VALUE)  \
( fprintf (FILE, "\tfdb "),			\
  output_addr_const (FILE, (VALUE)),		\
  fprintf (FILE, "\015"))

#undef ASM_OUTPUT_CHAR
#define ASM_OUTPUT_CHAR(FILE,VALUE)  \
( fprintf (FILE, "\tfcb "),			\
  output_addr_const (FILE, (VALUE)),		\
  fprintf (FILE, "\015"))

#undef ASM_OUTPUT_BYTE
#define ASM_OUTPUT_BYTE(FILE,VALUE)  \
  fprintf (FILE, "\tfcb 0x%x\015", (VALUE))


#undef ASM_OUTPUT_SKIP
#define ASM_OUTPUT_SKIP(FILE,SIZE)  \
  fprintf (FILE, "\trmb %d\015", (SIZE))



#undef ASM_OUTPUT_ALIGN
#define ASM_OUTPUT_ALIGN(FILE,LOG)	\
  if ((LOG) == 1)			\
    fprintf (FILE, "\teven\015");	\
  else if ((LOG) != 0)			\
    abort ();

#undef ASM_OUTPUT_ASCII
#define ASM_OUTPUT_ASCII(file, p, size)			\
{							\
  for (i = 0; i < size; i++)				\
    {							\
      register int c = p[i];				\
      if ((i / 40) * 40 == i)				\
      if (i == 0)					\
        fprintf (file, "\tfcb \"");			\
      else						\
        fprintf (file, "\"\015\tfcb \"");		\
      if (c == '\"' || c == '\\')			\
        putc ('\\', file);				\
      if (c >= ' ' && c < 0177)				\
        putc (c, file);					\
      else						\
        {						\
          fprintf (file, "\\%3.3o", c);			\
          if (i < size - 1 				\
              && p[i + 1] >= '0' && p[i + 1] <= '9')	\
          fprintf (file, "\"\015\tfcb \"");		\
        }						\
    }							\
  fprintf (file, "\",0\015");				\
}

#undef FUNCTION_PROLOGUE
#define FUNCTION_PROLOGUE(FILE, SIZE)     \
{ register int regno;						\
  register int mask = 0;					\
  static char *reg_names[] = REGISTER_NAMES;			\
  extern char call_used_regs[];					\
  int fsize = ((SIZE) + 3) & -4;				\
  if (frame_pointer_needed)					\
    { if (fsize < 0x8000)			\
        fprintf (FILE, "\tlink a6,#%d\015", -fsize);		\
      else							\
	fprintf (FILE, "\tlink a6,#0\015\tsubl #%d,sp\015", fsize); }  \
  for (regno = 24; regno < 56; regno++)				\
    if (regs_ever_live[regno] && ! call_used_regs[regno])	\
      fprintf(FILE, "\tfpmoved %s, sp@-\015",			\
	      reg_names[regno]);				\
  for (regno = 16; regno < 24; regno++)				\
    if (regs_ever_live[regno] && ! call_used_regs[regno])	\
       mask |= 1 << (regno - 16);				\
  if ((mask & 0xff) != 0)					\
    fprintf (FILE, "\tfmovem #0x%x,sp@-\015", mask & 0xff);       \
  mask = 0;							\
  for (regno = 0; regno < 16; regno++)				\
    if (regs_ever_live[regno] && ! call_used_regs[regno])	\
       mask |= 1 << (15 - regno);				\
  if (frame_pointer_needed)					\
    mask &= ~ (1 << (15-FRAME_POINTER_REGNUM));			\
  if (exact_log2 (mask) >= 0)					\
    fprintf (FILE, "\tmovel %s,sp@-\015", reg_names[15 - exact_log2 (mask)]);  \
  else if (mask) fprintf (FILE, "\tmoveml #0x%x,sp@-\015", mask); }

#undef FUNCTION_EPILOGUE
#define FUNCTION_EPILOGUE(FILE, SIZE) \
{ register int regno;						\
  register int mask, fmask;					\
  register int nregs;						\
  int offset, foffset, fpoffset;				\
  extern char call_used_regs[];					\
  static char *reg_names[] = REGISTER_NAMES;			\
  extern int current_function_pops_args;			\
  extern int current_function_args_size;			\
  int fsize = ((SIZE) + 3) & -4;				\
  int big = 0;							\
  nregs = 0;  fmask = 0; fpoffset = 0;				\
  for (regno = 24 ; regno < 56 ; regno++)			\
    if (regs_ever_live[regno] && ! call_used_regs[regno])	\
      nregs++;							\
  fpoffset = nregs*8;						\
  nregs = 0;							\
  for (regno = 16; regno < 24; regno++)				\
    if (regs_ever_live[regno] && ! call_used_regs[regno])	\
      { nregs++; fmask |= 1 << (23 - regno); }			\
  foffset = fpoffset + nregs * 12;				\
  nregs = 0;  mask = 0;						\
  if (frame_pointer_needed) regs_ever_live[FRAME_POINTER_REGNUM] = 0; \
  for (regno = 0; regno < 16; regno++)				\
    if (regs_ever_live[regno] && ! call_used_regs[regno])	\
      { nregs++; mask |= 1 << regno; }				\
  offset = foffset + nregs * 4;					\
  if (offset + fsize >= 0x8000 					\
      && frame_pointer_needed 					\
      && (mask || fmask || fpoffset)) 				\
    { fprintf (FILE, "\tmovel #%d,a0\015", -fsize);		\
      fsize = 0, big = 1; }					\
  if (exact_log2 (mask) >= 0) {					\
    if (big)							\
      fprintf (FILE, "\tmovel a6@(-%d,a0:l),%s\015",		\
	       offset + fsize, reg_names[exact_log2 (mask)]);	\
    else if (! frame_pointer_needed)				\
      fprintf (FILE, "\tmovel sp@+,%s\015",			\
	       reg_names[exact_log2 (mask)]);			\
    else							\
      fprintf (FILE, "\tmovel a6@(-%d),%s\015",			\
	       offset + fsize, reg_names[exact_log2 (mask)]); }	\
  else if (mask) {						\
    if (big)							\
      fprintf (FILE, "\tmoveml a6@(-%d,a0:l),#0x%x\015",		\
	       offset + fsize, mask);				\
    else if (! frame_pointer_needed)				\
      fprintf (FILE, "\tmoveml sp@+,#0x%x\015", mask);		\
    else							\
      fprintf (FILE, "\tmoveml a6@(-%d),#0x%x\015",		\
	       offset + fsize, mask); }				\
  if (fmask) {							\
    if (big)							\
      fprintf (FILE, "\tfmovem a6@(-%d,a0:l),#0x%x\015",		\
	       foffset + fsize, fmask);				\
    else if (! frame_pointer_needed)				\
      fprintf (FILE, "\tfmovem sp@+,#0x%x\015", fmask);		\
    else							\
      fprintf (FILE, "\tfmovem a6@(-%d),#0x%x\015",		\
	       foffset + fsize, fmask); }			\
  if (fpoffset != 0)						\
    for (regno = 55; regno >= 24; regno--)			\
      if (regs_ever_live[regno] && ! call_used_regs[regno]) {	\
	if (big)						\
	  fprintf(FILE, "\tfpmoved a6@(-%d,a0:l), %s\015",	\
		  fpoffset + fsize, reg_names[regno]);		\
	else if (! frame_pointer_needed)			\
	  fprintf(FILE, "\tfpmoved sp@+, %s\015",			\
		  reg_names[regno]);				\
	else							\
	  fprintf(FILE, "\tfpmoved a6@(-%d), %s\015",		\
		  fpoffset + fsize, reg_names[regno]);		\
	fpoffset -= 8;						\
      }								\
  if (frame_pointer_needed)					\
    fprintf (FILE, "\tunlk a6\015");				\
  if (current_function_pops_args && current_function_args_size)	\
    fprintf (FILE, "\trtd #%d\015", current_function_args_size);	\
  else fprintf (FILE, "\trts\015"); }



/* Alignment of field after `int : 0' in a structure.  */

#undef EMPTY_FIELD_BOUNDARY
#define EMPTY_FIELD_BOUNDARY 16

/* Every structure or union's size must be a multiple of 2 bytes.  */

#define STRUCTURE_SIZE_BOUNDARY 16

/* This is BSD, so it wants DBX format.  */

#define DBX_DEBUGGING_INFOxx


#define bcopy(a,b,c) memcpy (b,a,c)
#define bzero(a,b) memset (a,0,b)
#define bcmp(a,b,c) memcmp (a,b,c)
