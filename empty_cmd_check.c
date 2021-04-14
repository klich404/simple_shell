#include "holberton.h"

/**
 * empty_cmd_check - checkes wether a command line has characters
 * or is only empty spaces
 * @n_string: a string that contains all the arguments in the command line
  */

void empty_cmd_check(char *n_string)
{
	int k;

	for (k = 0; n_string[k] == 32; k++)
	{
		printf("%i\n", k);
	}
	if (n_string[k] == 00)
	{
		printf("SE ENCONTRO CARACTER NULO");
		free(n_string);
		exit(0);
	}
	return;
}

