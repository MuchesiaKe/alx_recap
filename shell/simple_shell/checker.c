#include "shell.h"

/**
*checker - checks if command is present in PATH
*@input_arr: array of command and arguements
*Return: full path of command
**/

char  *checker(char **input_arr)
{
	char *path, *comm_path, *full_path;
	struct stat st;

	path = malloc(sizeof(char *));
	full_path = malloc(sizeof(char *));
	path = getenv("PATH");
	comm_path = strtok(path, ":");
	while (comm_path != NULL)
	{
		strcpy(full_path, comm_path);
		full_path = strcat(full_path, "/");
		full_path = strcat(full_path, input_arr[0]);
		if (stat(full_path, &st) == 0)
		{
			return (full_path);
		}
		comm_path = strtok(NULL, ":");
	}
	return (NULL);
}
