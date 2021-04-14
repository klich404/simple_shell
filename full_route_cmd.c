#include "holberton.h"

/**
 * full_route_cmd - Deals with the routine when the command
 * route is specificed in the prompt
 * @linecounter: keep track of the lines entered on the prompt
 * @argv: stores the command and parameters entered by user on the prompt
 * @
 */

void full_route_cmd(int linecounter, char **argv)
{
	struct stat st;
	pid_t pid;
	int status = 0, bi = 0;

	bi = built_in(argv);
	if (bi == 1)
		return;
	if (stat(argv[0], &st) == 0)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("Error:");
			return;
		}
		if (pid != 0)
		{
			wait(&status);
			free_cmd(argv);
		}
		if (pid == 0)
			execve(argv[0], argv, environ); /*execve*/
	}
	else
		_printf("%d : %s: command not found\n", linecounter, argv[0]);
	free_cmd(argv);
}
