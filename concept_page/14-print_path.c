#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>


int main(void)
{
	int i = 0;
	char *path = getenv("PATH");
	char **token = malloc(50 * sizeof(char *));

	token[i] = strtok(path, ":");

	/*tokenize PATH variable*/
	while (token[i])
	{
		token[i + 1] = strtok(NULL, ":");
		printf("%s\n", token[i]); /*print token*/
		i++;
	}
	return (0);
}
