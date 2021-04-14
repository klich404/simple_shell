#include "holberton.h"

/**
 * full_route_cmd - Deals with the routine when the command
 * route is specificed in the prompt
 * @linecounter: keep track of the lines entered on the prompt
 * @argv: stores the command and parameters entered by user on the prompt
 * @
 */

void full_route_cmd(__attribute__((unused)) int linecounter, char **argv)
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
		}
		if (pid == 0)
			execve(argv[0], argv, environ); /*execve*/
	}
	else
		write(STDOUT_FILENO, "command not found\n", 18);
	free_cmd(argv);
}
