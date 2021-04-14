#include "holberton.h"
/**
 * n_com_storer- spit the command line into words and creates a array of
 * pointers pointing to each one.
 * @string: the string containing the command line to be splitted into words
 * Return: a pointer to the array of pointers argv
 */

char **n_com_storer(char *string)
{
	char **argv = NULL, *input_copy = NULL, *w_counter = NULL;
	int i = 0;

	input_copy = _strdup(string);
	w_counter = strtok(input_copy, "\n");
	i = 0;
	while (w_counter)
	{
		i++;
		w_counter = strtok(NULL, "\n");
	}
	free(input_copy);
	i++;
	argv = malloc(sizeof(char *) * i);
	i = 0;
	argv[0] = _strdup(strtok(string, "\n"));
	while (argv[i])
	{
		i++;
		argv[i] = _strdup(strtok(NULL, "\n"));
	}
	argv[i] = NULL;
	return (argv);
}
