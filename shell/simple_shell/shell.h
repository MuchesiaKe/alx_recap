#ifndef SHELL_H
#define SHELL_H
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <unistd.h>
	#include <sys/wait.h>

	char *get_input(void);
	char **tokenizer(char *input);
	int word_counter(char *input);
	void executer(char **input_arr);
#endif
