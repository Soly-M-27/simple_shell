#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>

extern char **environ;

/* our own function prototypes */
void prompt(void);
char *read_line(void);
char **tokenize_input(char *line);
char **find_path(char *path);
char *concat_command(char **dirs, char *command);
int execute_child(char ** tokens, char *command);

/* function prototypes for built-ins */
void display_env(void);

/* function prototypes for implementations */
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strdup(char *src);/*maybe not this one IDK*/
char *_getenv(const char *name);
char *_strcat(char *dest, char *src);

#endif /*_MAIN_H_*/
