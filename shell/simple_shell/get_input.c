#include "shell.h"

/**
*get_input - get user input
*Return: pointer to user input
**/

char *get_input(void)
{
	char *input;
	size_t size;

	input = malloc(sizeof(char *));
	printf("$ ");
	getline(&input, &size, stdin);
	return (input);
}
