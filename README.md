![alt text](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)
# 0x16.C - Simple Shell


## Description


This program runs a simple shell. This shell will
execute the most basic commands present in the bash
shell, while also having access to two built in commands:
exit and env.

## Returns


When successfully compiled, the users prompt will be sent
to search the matching command line that is meant to be
executed and if said command has no matches, an error will
be sent to indicate failure of retrieval.

## Function Prototypes

* void prompt(void);
* char \*read_line(void);
* char \*\*tokenize_input(char \*line);
* int execute_child(char \*\*tokens);
* void display_env(void);
* int \_strlen(char \*s);
* int \_strcmp(char \*s1, char \*s2);
* char \*\_getenv(const char \*name);
* void free_grid(char \*\*grid);


## Compilation


All files will be compiled with the following:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.h -o hsh
```

## List of modes available
* Interactive mode - allows you to run the shell program and run commands

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

* Non-interactive mode - allows you to pipe commands into the program

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
```

## Built-in commands

| Command | Description |
| ----- | ------ |
| env  | Displays the environment |
| exit | For user to use whenever they desire to exit the shell |
| CTRL + C | For user to use whenever they desire to exit the shell |

## Files


| Files | Description |
| ----- | ------ |
| README.md | Current file containing information about this project |
| main.h | Header file that contains all library and prototype functions |
| shell.c | The simple shell itself and its main |
| prompt.c | Prints the prompt for user to type in each time the shell repeats its cycle |
| read_line.c | Function that gets input from user to match correct output or error message |
| tokenize.c | Function that tokenizes user input to then compare it to existing commands and execute them |
| execute.c | Function that forks pid along with its child process |
| display_env.c | Function that is called if user enters built in command env |
| functions.c | File that contains all author written frunctions for basic use |


## Authors

Amisaday Mart??nez Campos | [@ammartica](https://github.com/ammartica)

Solymar Sanchez Molina | [@Soly-M-27](https://github.com/Soly-M-27)
