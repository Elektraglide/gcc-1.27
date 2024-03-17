#include <stdio.h>

#undef putchar

int putchar(c)
char c;
{
	fputc(c, stdout);
}

