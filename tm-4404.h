#define MOTOROLA


#include "tm-m68000.h"

/* See tm-m68k.h.  0 means 68000 with no 68881.  */

#define TARGET_DEFAULT 0

#define STARTFILE_SPEC  "%{pg:/lib/Cwrapper.r%s}%{!pg:%{p:/lib/Cwrapper.r%s}%{!p:/lib/Cwrapper.r%s}}"
  
#define ASM_SPEC "+u"

#define LINK_SPEC "+b=1M"

#define LIB_SPEC "+l=clibs +l=cmathlib +l=netlib"

/* Names to predefine in the preprocessor for this target machine.  */

#define CPP_PREDEFINES "-Dtek -Dunix"

/* Uniflex uses \015 */
#undef TARGET_NEWLINE
#define TARGET_NEWLINE 015



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
