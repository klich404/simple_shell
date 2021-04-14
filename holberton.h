#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
void empty_cmd_check(char *n_string);
int interactive_mode(void);
int non_interactive_mode(void);
char **com_storer(char *string);
char **n_com_storer(char *string);
void slash_to_cmd(__attribute__((unused)) int linecounter, char *tokenizer, char **argv);
void full_route_cmd(__attribute__((unused)) int linecounter, char **argv);
int built_in(char **argv);
char *read_line(void);
char *n_read_line(void);
void free_cmd(char **cmd_line);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strcat(char *s1, char *s2);
char *_strdup(char *str);

#endif
