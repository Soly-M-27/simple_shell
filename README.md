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

## Compilation


All files will be compiled with the following:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.h -o shell

## List of commands available

* /bin/ls - lists all files in current working directory
* /bin/ls -l - lists all files in current working directory in long format

## Builtins

*env - Displays the environment

*exit - For user to use whenever they desire to exit out of shell
by presinf CTRL-D.

## Files


* README.md: Current file containing information about this project

* main.h - Heade file that contains all library and prototype functions

* shell.c - The simple shell itself and its main

* prompt.c - Prints the prompt for user to type in each time the shell
repeats its cycle

* read_line.c - Function that gets input from user to match correct output
or error message

* tokenize.c - Function that tokenizes whatever read_line.c retrieved to then
send tokens through string compare functions created by the authors in order
to dislay correct output based on commands lines entered by the user.

* execute.c - Function that forks pid along with its child process

* display_env.c - Function that is called if user enters built in command env

* functions.c - File that contains all author written frunctions for basic use


## Authors
.
Amisaday Martínez Campos | [@ammartica](https://github.com/ammartica)

Solymar Sanchez Molina | [@Soly-M-27](https://github.com/Soly-M-27)
