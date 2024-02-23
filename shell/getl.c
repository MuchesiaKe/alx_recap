#include <stdio.h>
#include <stdlib.h>

int input(char *s, int length);

int main()
{
	char *buffer;
	size_t buffsize = 32;
	size_t characters;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer\n");
		exit(1);
	}
	printf("Type something: ");
	characters = getline(&buffer, &buffsize, stdin);
	printf("%zu characters were read.\n", characters);
	printf("You typed: '%s'\n", buffer);
	return (0);
}
