#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string that will be concatenated
 * Return: pointer to the concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
