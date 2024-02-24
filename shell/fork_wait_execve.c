#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
*main - super simple shell
*
*Return: Always 0
**/

int main(void)
{
	pid_t forked_pid;
	int status, i;
	char *argv[] = {"/usr/bin/ls", "-l", "/tmp", NULL};

	i = 0;
	while (i < 5)
	{
		forked_pid = fork();
		if (forked_pid == -1)
		{
			perror("Error:");
		}

		else if (forked_pid == 0)
			execve(argv[0], argv, NULL);
		else 
			wait(&status);
		i++;
	}
	return (0);
}
