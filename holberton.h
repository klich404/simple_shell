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

int interactive_mode(void);
int non_interactive_mode(void);
char **com_storer(char *string);
char **n_com_storer(char *string);
void slash_to_cmd(int linecounter, char *tokenizer, char **argv);
void full_route_cmd(int linecounter, char **argv);
int built_in(char **argv);
char *read_line(void);
char *n_read_line(void);
void free_cmd(char **cmd_line);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, int n);
char *_strcat(char *s1, char *s2);
char *_strdup(char *str);

/*_printf*/
int _printf(const char *format, ...);
void p_char(va_list input_arg, int *size);
void p_string(va_list input_arg, int *size);
void p_int(va_list input_arg, int *size);
int selec(char c_selec);
void p_percent(va_list input_arg, int *size);


/**
 *struct identifier - strutct of the formmated types and functions
 *@s_id: format type
 *@func: functions
 */

typedef struct identifier
{
	char *s_id;
	void (*func)(va_list, int *);
} ident;
/*_printf*/


#endif
