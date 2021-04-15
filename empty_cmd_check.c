#include "holberton.h"

/**
 * empty_cmd_check - checkes wether a command line has characters
 * or is only empty spaces
 * @n_string: a string that contains all the arguments in the command line
 * Return: 0 or 1
  */

int empty_cmd_check(char *n_string)
{
	int k = 0;

	while (n_string[k] == 32)
		k++;
	if (n_string[k] == 00)
	{
		return (0);
	}
	return (1);
}

