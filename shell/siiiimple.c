#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - illustration of double pointer operations
*Return: Always 0
**/

int main(void)
{
	char **words_arr, *token;
	char str[] = "Something to try here";
	int i;

	i = 4;
	words_arr = malloc(5 * sizeof(char *));
	if (words_arr == NULL)
	{
		perror("word_arr memory allocation failed");
		exit(1);
	}
	token = strtok(str, " ");
	i = 0;
	while (i < 4 && token != NULL)
	{
		words_arr[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}
	words_arr[i] = NULL;

	i = 0;
	while (words_arr[i])
		printf("%s\n", words_arr[i++]);
	return (0);
}
