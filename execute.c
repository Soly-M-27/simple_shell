#include "main.h"

/**
 * execute_command - executes a command
 * @tokens: list of commands to be executed
 * @av: argument vector
 * Return:
 */
int execute_child(char **tokens)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			free_grid(tokens);
			perror("not found");
			exit(EXIT_FAILURE);
		}
		free_grid(tokens);
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
