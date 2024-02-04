#include "main.h"

/**
*print_rev - print a string in reverse followed by a newline
*@s: string to print in reverse
**/

void print_rev(char *s)
{
	char *temp;

	temp = s;
	while(*temp++);
	while (temp != s)
		_putchar(*--temp);
	_putchar('\n');
}
