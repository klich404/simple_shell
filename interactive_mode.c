#include "holberton.h"

/**
 * interactive_mode - the interactive_mode
 * Return: 0 or 1 if it fail
 */

int interactive_mode(void)
{
	char *string = NULL, *path = "PATH=", *tokenizer = NULL, *env_copy = NULL;
	int linecounter = 0, k = 0;
	char **cmd_line = NULL;

	while (1) /*prompt*/
	{
		linecounter++;
		string = read_line();
		if (string[0] == '\n')
		{
			free(string);
			continue;
		}
		cmd_line = com_storer(string);
		if (cmd_line[0][0] == '/')
		{
			full_route_cmd(linecounter, cmd_line);
			free(string);
		}
		else
		{
			for (k = 0; environ[k] != NULL; k++)
			{
				if (_strncmp(environ[k], path, 4) == 0)
				{
					env_copy = _strdup(environ[k] + 5);
					tokenizer = strtok(env_copy, ":");
					free(string);
					free(env_copy);
					slash_to_cmd(linecounter, tokenizer, cmd_line);
					break;
				}
			}
			if (_strncmp(environ[k], path, 4) != 0)
				write(STDOUT_FILENO, "PATH not found\n", 15);
		}
	}
	free(string);
	return (0);
}
