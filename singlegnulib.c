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


#include <stdio.h>
/* This is used by the `assert' macro.  */
void
__eprintf (string, line)
     char *string;
     int line;
{
  fprintf (stderr, string, line);
}



__umulsi3 (a, b)
     unsigned a, b;
{
  return a * b;
}



__mulsi3 (a, b)
     int a, b;
{
  return a * b;
}



__udivsi3 (a, b)
     unsigned a, b;
{
  return a / b;
}



__divsi3 (a, b)
     int a, b;
{
  return a / b;
}



__umodsi3 (a, b)
     unsigned a, b;
{
  return a % b;
}



__modsi3 (a, b)
     int a, b;
{
  return a % b;
}



__lshrsi3 (a, b)
     unsigned a, b;
{
  return a >> b;
}



__lshlsi3 (a, b)
     unsigned a, b;
{
  return a << b;
}



__ashrsi3 (a, b)
     int a, b;
{
  return a >> b;
}



__ashlsi3 (a, b)
     int a, b;
{
  return a << b;
}



double
__divdf3 (a, b)
     double a, b;
{
  return a / b;
}



double
__muldf3 (a, b)
     double a, b;
{
  return a * b;
}



double
__negdf2 (a)
     double a;
{
  return -a;
}



double
__adddf3 (a, b)
     double a, b;
{
  return a + b;
}



double
__subdf3 (a, b)
     double a, b;
{
  return a - b;
}



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



__fixunsdfsi (a)
     double a;
{
  return (unsigned int) a;
}



double
__fixunsdfdi (a)
     double a;
{
  union double_di u;
  u.i[LOW] = (unsigned int) a;
  u.i[HIGH] = 0;
  return u.d;
}



__fixdfsi (a)
     double a;
{
  return (int) a;
}



double
__fixdfdi (a)
     double a;
{
  union double_di u;
  u.i[LOW] = (int) a;
  u.i[HIGH] = (int) a < 0 ? -1 : 0;
  return u.d;
}



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




double
__floatdidf (u)
     union double_di u;
{
  register double hi
    = ((double) u.i[HIGH]) * (double) 0x10000 * (double) 0x10000;
  register double low = (unsigned int) u.i[LOW];
  return hi + low;
}



SFVALUE
__addsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f + b.f);
}



SFVALUE
__negsf2 (a)
     union flt_or_int a;
{
  union flt_or_int intify;
  return INTIFY (-a.f);
}



SFVALUE
__subsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f - b.f);
}



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



SFVALUE
__mulsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f * b.f);
}



SFVALUE
__divsf3 (a, b)
     union flt_or_int a, b;
{
  union flt_or_int intify;
  return INTIFY (a.f / b.f);
}



SFVALUE
__truncdfsf2 (a)
     double a;
{
  union flt_or_int intify;
  return INTIFY (a);
}



double
__extendsfdf2 (a)
     union flt_or_int a;
{
  union flt_or_int intify;
  return a.f;
}

