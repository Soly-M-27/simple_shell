#include "main.h"

/**
 * find_path - divide path in directories
 * @path_value: string to tokenize
 * @command: command to concatenate
 *
 * Return: command
 */
char **find_path(char *path_value)
{
	int i = 0;
	char **dirs = malloc(1024 * sizeof(char *));

	dirs[i] = strtok(path_value, ":");

	while (dirs[i])
	{
		dirs[i + 1] = strtok(NULL, ":");
		i++;
	}
	dirs[i] = NULL;

	return (dirs);
}

/**
 * concat_command - concatenates command to path directories
 * @directories: 2d array full of directories in PATH
 * @command: command to concatenate
 *
 * Return: full path to command to be executed
 */
char *concat_command(char **dirs, char *command)
{
	int total = 0, i;
	char *new_command;


	/* loop to get total count of directories */
	while (dirs[total])
		total++;

	for (i = 0; i < total; i++)
	{
		dirs[i] = strcat(dirs[i], command);
		printf("are we concatenating? %s\n", dirs[i]);
	}
	return (dirs);
}


