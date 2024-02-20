#include <stdio.h>

/**
*main - prints all arguments without using ac
*@ac : argument counter
*av : argument vector
*Return: Always 0
**/

int main(int ac, char **av)
{
	(void) (ac);

	while (*av)
	{
		printf("%s\n", *av++);
	}
	return (0);
}
