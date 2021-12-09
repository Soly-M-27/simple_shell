#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be returned
 * Return: a string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int less, equal or greater than 0 if s1 < s2, s1 == s2 or s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}


/**
 * _getenv - gets value of env var
 * @name: name of variable in env
 *
 * Return: NULL or value of env var
 */
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
