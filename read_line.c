#include "holberton.h"

/**
 * read_line - read the command line
 * Return: string
 */

char *read_line(void)
{
	char *string = NULL;
	size_t n_bytes = 0;
	ssize_t b_read = 0;

	write(STDOUT_FILENO, "$", 1);
	b_read = getline(&string, &n_bytes, stdin); /*getline*/
	if (b_read == -1)
	{
		free(string);
		exit(0);
	}
	if (string[0] != '\n')
		string[b_read - 1] = 00;
	return (string);
}
