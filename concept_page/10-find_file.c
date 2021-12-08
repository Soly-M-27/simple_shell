#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(int ac, char **av, char **env)
{
	size_t buffsize = 0;
	char *buffer = (char *)malloc(buffsize * sizeof(char));
	int i = 0, status, j;
	struct stat st;
	pid_t child;
	char *string = NULL;
	char *path = getenv("PATH");
	char **token = malloc(1024 * sizeof(char *));
	char *argv[1024];
	char *concat[1024];

	if (buffer == NULL)
		exit(1);

	/* start shell*/
	while (1)
	{
		printf("#cisfun$ ");
		getline(&buffer, &buffsize, stdin); /*recieve user input*/

		/*erase the ENTER (\n) from the user input*/
		while (buffer[i] != '\n')
			i++;
		buffer[i] = '\0';

		i = 0; /*I finished using it in buffer so I am reinitializing it in order to use it in token iteration*/
		token[i] = strtok(path, ":");
	/*tokenize PATH variable*/
		while (token[i])
		{
			token[i + 1] = strtok(NULL, ":");
			printf("are we making the right array? %s\n", token[i]); /*debugging*/
			i++;
		}

		token[i] = NULL;
		
		/*iterate through argv*/
		for (j = 0; j < i; j++)
		{
			printf("before %s\n", token[j]);
			string = strcat(token[j], "hi");
			printf("after %s\n", token[j]);
			/*
			argv[j] = strcat(argv[j], buffer);
			
			debugging
			printf("did we concat? %s\n", argv[j]);

				if (stat(argv[i], &st) == 0)
			{
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
			}*/
		}
	}
	return (0);
}
