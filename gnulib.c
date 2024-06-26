/* AB because we fleading-underscore, needed to add extra _ */

/* Subroutines needed by GCC output code on some machines.  */
/* Compile this file with the Unix C compiler!  */

#include "config.h"

/* These definitions work for machines where an SF value is
   returned in the same register as an int.  */

#ifndef SFVALUE  
#define SFVALUE int
#endif

#ifndef INTIFY
#define INTIFY(FLOATVAL)  (intify.f = (FLOATVAL), intify.i)
#endif

union double_di { double d; int i[2]; };
union flt_or_int { int i; float f; };

#ifdef WORDS_BIG_ENDIAN
#define HIGH 0
#define LOW 1
#else
#define HIGH 1
#define LOW 0
#endif

#ifdef L_eprintf
#include <stdio.h>
/* This is used by the `assert' macro.  */
void
__eprintf (string, line)
     char *string;
     int line;
{
  fprintf (stderr, string, line);
}
#endif

#ifdef L_umulsi3
__umulsi3 (a, b)
     unsigned a, b;
{
  return a * b;
}
#endif

#ifdef L_mulsi3
__mulsi3 (a, b)
     int a, b;
{
  return a * b;
}
#endif

#ifdef L_udivsi3
__udivsi3 (a, b)
     unsigned a, b;
{
  return a / b;
}
#endif

#ifdef L_divsi3
__divsi3 (a, b)
     int a, b;
{
  return a / b;
}
#endif

#ifdef L_umodsi3
__umodsi3 (a, b)
     unsigned a, b;
{
  return a % b;
}
#endif

#ifdef L_modsi3
__modsi3 (a, b)
     int a, b;
{
  return a % b;
}
#endif

#ifdef L_lshrsi3
__lshrsi3 (a, b)
     unsigned a, b;
{
  return a >> b;
}
#endif

#ifdef L_lshlsi3
__lshlsi3 (a, b)
     unsigned a, b;
{
  return a << b;
}
#endif

#ifdef L_ashrsi3
__ashrsi3 (a, b)
     int a, b;
{
  return a >> b;
}
#endif

#ifdef L_ashlsi3
__ashlsi3 (a, b)
     int a, b;
{
  return a << b;
}
#endif

#ifdef L_divdf3
double
__divdf3 (a, b)
     double a, b;
{
  return a / b;
}
#endif

#ifdef L_muldf3
double
__muldf3 (a, b)
     double a, b;
{
  return a * b;
}
#endif

#ifdef L_negdf2
double
__negdf2 (a)
     double a;
{
  return -a;
}
#endif

#ifdef L_adddf3
double
__adddf3 (a, b)
     double a, b;
{
  return a + b;
}
#endif

#ifdef L_subdf3
double
__subdf3 (a, b)
     double a, b;
{
  return a - b;
}
#endif

#ifdef L_cmpdf2
int
__cmpdf2 (a, b)
     double a, b;
{
  if (a > b)
    return 1;
  else if (a < b)
    return -1;
  return 0;
}
#endif

#ifdef L_fixunsdfsi
__fixunsdfsi (a)
     double a;
{
  return (unsigned int) a;
}
#endif

#ifdef L_fixunsdfdi
double
__fixunsdfdi (a)
     double a;
{
  union double_di u;
  u.i[LOW] = (unsigned int) a;
  u.i[HIGH] = 0;
  return u.d;
}
#endif

#ifdef L_fixdfsi
__fixdfsi (a)
     double a;
{
  return (int) a;
}
#endif

#ifdef L_fixdfdi
double
__fixdfdi (a)
     double a;
{
  union double_di u;
  u.i[LOW] = (int) a;
  u.i[HIGH] = (int) a < 0 ? -1 : 0;
  return u.d;
}
#endif

#ifdef L_floatsidf
double
__floatsidf (a)
     int a;
{
  return (double) a;
}

/* AB added */
double
__floatunsidf (a)
     unsigned int a;
{
  return (double) a;
}

__eqdf2(a,b)
double a,b;
{
	return a != b;
}

__ltdf2(a,b)
double a,b;
{
	return a < b;
}

__gtdf2(a,b)
double a,b;
{
	return a > b;
}

__nedf2(a,b)
double a,b;
{
	return a == b;
}

#endif

#ifdef L_floatdidf
double
__floatdidf (u)
     union double_di u;
{
  register double hi
    = ((double) u.i[HIGH]) * (double) 0x10000 * (double) 0x10000;
  register double low = (unsigned int) u.i[LOW];
  return hi + low;
}
#endif

#ifdef L_addsf3
SFVALUE
__addsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f + b.f);
}
#endif

#ifdef L_negsf2
SFVALUE
__negsf2 (a)
     union flt_or_int a;
{
  union flt_or_int intify;
  return INTIFY (-a.f);
}
#endif

#ifdef L_subsf3
SFVALUE
__subsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f - b.f);
}
#endif

#ifdef L_cmpsf2
int
__cmpsf2 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  if (a.f > b.f)
    return 1;
  else if (a.f < b.f)
    return -1;
  return 0;
}
#endif

#ifdef L_mulsf3
SFVALUE
__mulsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f * b.f);
}
#endif

#ifdef L_divsf3
SFVALUE
__divsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f / b.f);
}
#endif

#ifdef L_truncdfsf2
SFVALUE
__truncdfsf2 (a)
     double a;
{
  union flt_or_int intify;
  return INTIFY (a);
}
#endif

#ifdef L_extendsfdf2
double
__extendsfdf2 (a)
     union flt_or_int a;
{
  union flt_or_int intify;
  return a.f;
}
#endif
