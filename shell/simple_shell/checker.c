#include "shell.h"

/**
*checker - checks if command is present in PATH
*@env : environment variable passed from main
**/

void checker(char **input_arr)
{
	char *path, *comm_path, *full_path;
	struct stat st;

	path = malloc(sizeof(char *));
	full_path = malloc(sizeof(char *));
	path = getenv("PATH");
	printf("PATH: %s\n", path);
	comm_path = strtok(path, ":");
	while (comm_path != NULL)
	{
		strcpy(full_path, comm_path);
		full_path = strcat(full_path, "/");
		full_path = strcat(full_path, input_arr[0]);
		if (stat(full_path, &st) == 0)
		{
			printf("full_path: %s\n", full_path);
			printf("VALID COMMAND!\n");
			exit(0);
		}
		comm_path = strtok(NULL, ":");
	}
	printf("Invalid command\n");
}

/**
*main - control program execution
*Return: Always 0
**/

int main(void)
{
	char *input_arr[] = {"ls"};

	checker(input_arr);
	return (0);
}
