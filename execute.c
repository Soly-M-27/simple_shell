#include "main.h"

/**
 * execute_command - executes a command
 * @tokens - list of commands to be executed
 *
 * Return: 
 */
int execute_child(char **tokens, char *command)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		free(tokens);
		printf("debugging 1\n");
		perror("./shell");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			free(tokens);
			printf("debugging 2\n");
			perror("./shell");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		if (stat == 1)
			free(tokens[0]);
		
		free(tokens[0]);
		wait(&status);
	}
	return (0);
}
