#include "shell.h"

/**
*main - control program execution
*Return: Always 0
**/

int main(void)
{
	char *input, **input_arr;

	input = get_input();
	input_arr = tokenizer(input);
	checker(input_arr);
	free(input);
	return (0);
}
