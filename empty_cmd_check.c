#include "holberton.h"

/**
 * empty_cmd_check - checkes wether a command line has characters
 * or is only empty spaces
 * @n_string: a string that contains all the arguments in the command line
  */

void empty_cmd_check(char *n_string)
{
	int k = 0;

	while (n_string[k] == ' ')
	{
		if (n_string[k + 1])
			k++;
		else
		{
			free(n_string);
			exit();
		}
	}
}

