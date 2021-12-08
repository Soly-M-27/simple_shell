#include "main.h"

/**
 * main - simple shell
 *
 * Return: 1
 */
int main(void)
{
	char *user_input, *path, *command;
	char **tokens, **path_value;

	while (1)
	{
		/*prompt*/
		prompt();

		/*receives user input and stores it in user_input*/
		user_input = read_line();

		/* tokenizes user_input */
		tokens = tokenize_input(user_input);

		if ((_strcmp(tokens[0], "\n") != 0) || _strcmp(tokens[0], "env") != 0)
		{
			path = _getenv("PATH");
			path_value = find_path(path);
			command = concat_command(path_value, tokens[0]);
			execute_child(tokens, command);
		}
		else
		{
			free(tokens);
			free(user_input);
		}
	}
	return (0);
}

/**
 * prompt - displays prompt and waits for input
 *
 * Return: VOID
 */
void prompt(void)
{
	char *prompt = "#cisfun$ ";
	write(STDOUT_FILENO, prompt, _strlen(prompt));
}
