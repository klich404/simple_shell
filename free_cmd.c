#include "holberton.h"

/**
 * free_cmd -  frees a 2 dimensional cmd_line
 * @cmd_line: is a doble pointer
 */

void free_cmd(char **cmd_line)
{
	int x = 0;

	for (x = 0; cmd_line[x] != NULL; x++)
		free(cmd_line[x]);

	free(cmd_line);
}
