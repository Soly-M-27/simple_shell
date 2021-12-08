#include "main.h"

/**
 * read_line - reads user input
 *
 * Return: string of user input
 */
char *read_line(void)
{
	int i = 0, len;
	size_t buffsize = 0;
	char *line = NULL;
	
	len = getline(&line, &buffsize, stdin);

	if (line == NULL)
		exit(EXIT_FAILURE);

	/* if ctrl + d then exit */
	if (len == EOF)
	{
		if(isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		free(line);
		exit(EXIT_SUCCESS);
	}

	/*transforms enter into null byte*/
	while (line[i] != '\n')
		i++;
	line[i] = '\0';

	return (line);
}
