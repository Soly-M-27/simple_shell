#include "main.h"

/**
 * main - simple shell
 *
 * Return: 1
 */
int main(void)
{
	char *user_input;
	char **tokens;

	while (1)
	{
		/*prompt*/
		prompt();

		/*receives user input and stores it in user_input*/
		user_input = read_line();
		printf("user input is: %s\n", user_input);

		/* tokenizes user_input */
		tokens = tokenize_input(user_input);

		if (_strcmp(tokens[0], "env") != 0)
			execute_child(tokens);
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
