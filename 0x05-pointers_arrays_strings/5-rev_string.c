#include "main.h"

/**
*rev_string - reverses a string
*@s: string to reverse
**/

void rev_string(char *s)
{
	char *a, *b, temp;
	int i, half_len;

	a = b = s;
	i = half_len = 0;
	while (*++b)
		i++;
	b--;
	half_len = i / 2;
	i = 0;
	while (i < half_len)
	{
		temp = *b;
		*b-- = *a;
		*a++ = temp;
		i++;
	}
}
