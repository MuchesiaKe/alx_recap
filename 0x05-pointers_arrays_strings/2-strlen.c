#include "main.h"

/**
*_strlen - finds length of the string
*@s: string to find length
*Return: length of s
**/

int _strlen(char *s)
{
	int i;

	i = 0;
	while(*s++)
		i++;
	return (i);
}
