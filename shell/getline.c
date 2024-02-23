#include <stdio.h>
#include <stdlib.h>

/**
*main - reads user input
*Return: Alwaays 0
**/

int main(void)
{
	char *buffer;
	size_t size = 0;

	buffer = malloc(size * sizeof(*buffer));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer memory\n");
		exit (1);
	}
	printf("$ ");
	getline(&buffer, &size, stdin);
	printf("%s", buffer);
	return (0);
}
