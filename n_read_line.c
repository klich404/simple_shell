#include "holberton.h"

/**
 * n_read_line - read the command line
 * Return: string
 */

char *n_read_line(void)
{
	char *string = NULL;
	ssize_t b_read = 0;

	_printf("$");
	string = malloc(sizeof(char) * 4096);
	b_read = read(STDIN_FILENO, string, 4096); /*read*/
	if (b_read == -1)
	{
		free(string);
		exit(0);
	}
	string[b_read] = '\0';
	return (string);
}
