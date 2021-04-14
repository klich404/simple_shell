#include "holberton.h"

/**
 * non_interactive_mode - the non_interactive_mode
 * Return: 0 or 1 if it fail
 */

int non_interactive_mode(void)
{
	char *n_string = NULL, *path = "PATH=", *tokenizer = NULL, *env_copy = NULL;
	int linecounter = 0, k = 0, i = 0;
	char **cmd_line = NULL, *string = NULL, **n_cmd_line = NULL;

	n_string = n_read_line();
	n_cmd_line = n_com_storer(n_string);
	while (n_cmd_line[i])
	{
		linecounter++;
		string = _strdup(n_cmd_line[i]); /*LIBERAR*/
		cmd_line = com_storer(string);
		if (cmd_line[0][0] == '/')
		{
			full_route_cmd(linecounter, cmd_line);
			free(string);
		}
		else
		{
			for (k = 0; environ[k] != NULL; k++)
				if (_strncmp(environ[k], path, 4) == 0)
				{
					env_copy = _strdup(environ[k] + 5);
					tokenizer = strtok(env_copy, ":");
					free(env_copy);
					free(string);
					free(n_string);
					free_cmd(n_cmd_line);
					slash_to_cmd(linecounter, tokenizer, cmd_line);
					break;
				}
			if (_strncmp(environ[k], path, 4) != 0)
				_printf("PATH not found\n");
		}
		i++;
	}
	free_cmd(n_cmd_line);
	free(n_string);
	return (0);
}
