#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void)
{
	int status, i;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	pid_t child_pid;

	for (i = 1; i < 6; i++)
	{
		child_pid = fork();
		printf("\nchild_pid #%d is %u\n", i, child_pid);
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}

		if (child_pid == 0)
		{
			printf("ayy\n");
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else
			wait(&status);
	}
	return (0);
}
