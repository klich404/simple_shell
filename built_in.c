#include "holberton.h"

/**
 * built_in - the environ built in
 * @argv: is the command line
 * Return: 0 or 1
 */


int built_in(char **argv)
{
	char *built_in[] = {"exit", "env", NULL};
	int z = 0, k = 0;

	while (built_in[z])
	{
		if (_strcmp(argv[0], built_in[z]) == 0)
		{
			if (z == 0)
			{
				free_cmd(argv);
				exit(0);
			}
			else
			{
				for (k = 0; environ[k] != NULL; k++)
				{
					_printf("%s\n", environ[k]);
				}
				free_cmd(argv);
				return (1);
			}
		}
	z++;
	}
	return (0);
}
