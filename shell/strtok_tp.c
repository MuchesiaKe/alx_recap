#include <stdio.h>
#include <string.h>

/**
*main - illustration of strtok()
*Return: Always 0
**/

int main()
{
	char str[80] = "This is - www.tutorialspoint.com - website";
	const char s[2] = "-";
	char *token;

	token = strtok(str, s);
	while (token != NULL)
	{
		printf ("%s\n", token);
		token = strtok(NULL, s);
	}
	return (0);
}
