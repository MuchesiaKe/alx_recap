#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

/**
*tokenizer -  splits a string into words
*@str: string to split into words
*Return: an array of each word of the string
**/

char **tokenizer(char *str)
{
	int nw, i;
	char **token_arr, *token;

	i = 0;
	nw = word_counter(str);
	nw++;
	printf("nw: %d\n", nw);

	token_arr = malloc(nw * sizeof(*token_arr));
	if (token_arr == NULL)
	{
		perror("token_arr malloc failed\n");
		exit (1);
	}
	while (i <= nw)
	{
		printf("i: %d\n", i);
		token_arr[i] = malloc(sizeof(*token_arr));
		if (token_arr[i] == NULL)
		{
			perror("token_arr malloc failed");
			exit (1);
		}
		i++;
	}

	i = 0;
	token = strtok(str, " ");
	while (i <= nw)
	{
		token_arr[i] = token;
		printf("%s\n", token_arr[i]);
		token = strtok(NULL, " ");
		i++;
	}
	token_arr[i] = '\0';
	return (0);
}

/**
*main - control program execution
*Return: Always 0
**/

int main(void)
{
	char **tokenized;

	tokenized = tokenizer("Hello world over there");
	while (tokenized)
		printf("%s\n", *tokenized);
	return (0);
}
