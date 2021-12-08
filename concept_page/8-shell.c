#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	size_t buffsize = 0;
	char *buffer = (char *)malloc(buffsize * sizeof(char));
	pid_t child;
	int status;
	char *token;
	char *argv[1024];
	int i = 0;

	if (buffer == NULL)
		exit(1);

	while (1)
	{
		printf("#cisfun$ ");

		getline(&buffer, &buffsize, stdin);
		printf("command line is: %s\n", buffer);

		while (buffer[i] != '\n')
			i++;
		buffer[i] = '\0';

		i = 0;
		token = strtok(buffer, " ");
		while (token)
		{
			argv[i] = token;
			printf("debugging each token looks like: %s\n", token);
			token = strtok(NULL, " ");
			i++;
		}
		argv[i] = NULL;

		child = fork();
		if (child == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else
			wait(&status);
	}
	return (0);
}

