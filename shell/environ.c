#include <stdio.h>

/**
*main - print environment via global variable
*
*Return: Always 0
**/

extern char **environ;

int main(void)
{
	while (*environ)
		printf("%s\n", *environ++);
	return (0);
}
