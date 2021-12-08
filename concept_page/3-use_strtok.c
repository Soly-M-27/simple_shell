#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "Hello World I hate everything about tokens what the heck";
	char *token = strtok(str, " ");

	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
