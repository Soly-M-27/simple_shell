#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name)
{
	char **envPtr; /* pointer to environ */
	char *charPtr; /* pointer to character in string in environ */
	const char *namePtr; /*pointer to name we received */

	for (envPtr = environ; *envPtr != NULL; envPtr++) /* iterate through environment variables */
	{   /* compares name to environment variable name */
		for (charPtr = *envPtr, namePtr = name; *charPtr == *namePtr; charPtr++, namePtr++)
		{   /* makes sure to only compare name to env var name (not its value) */
			if (*charPtr == '=')
				break;
		} /* when name equals env variable name, return the value of the env variable */
		if ((*charPtr == '=') && (*namePtr == '\0'))
			return (charPtr + 1);
	}
	return (NULL);
}

int main(void)
{
	char *print;

	print = _getenv("PWD");

	printf("did we do it??? %s\n", print);

	return (0);
}
