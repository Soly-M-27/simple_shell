#include "main.h"

/**
 * execute_command - executes a command
 * @tokens - list of commands to be executed
 *
 * Return:
 */
int execute_child(char **tokens)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		free(tokens);
		perror("./shell");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			free(tokens);
			perror("./shell");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		free(tokens[0]);
		wait(&status);
	}
	return (0);
}
