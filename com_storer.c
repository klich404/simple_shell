#include "holberton.h"
/**
 * com_storer- spit the command line into words and creates a array of pointers
 * pointing to each one.
 * @string: the string containing the command line to be splitted into words
 * Return: a pointer to the array of pointers argv
 */

char **com_storer(char *string)
{
	char **argv = NULL, *input_copy = NULL, *w_counter = NULL;
	int i = 0;

	input_copy = _strdup(string);
	w_counter = strtok(input_copy, " ");
	i = 0;
	while (w_counter)
	{
		i++;
		w_counter = strtok(NULL, " ");
	}
	free(input_copy);
	i++;
	argv = malloc(sizeof(char *) * i);
	i = 0;
	argv[0] = _strdup(strtok(string, " "));
	while (argv[i])
	{
		i++;
		argv[i] = _strdup(strtok(NULL, " "));
	}
	argv[i] = NULL;
	return (argv);
}
