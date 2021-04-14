#include "holberton.h"

/**
 * slash_to_cmd - concat the cmd with the path of the path and executes it
 * @linecounter: is a line counter
 * @tokenizer: is the path separated by folders
 * @argv: is the command to excecute
 */

void slash_to_cmd(__attribute__((unused)) int linecounter, char *tokenizer, char **argv)
{
	char *command = NULL;
	struct stat st;
	int status = 0, bi = 0;
	pid_t pid;

	bi = built_in(argv);
	if (bi == 1)
		return;
	while (tokenizer != NULL) /*tonkenizar*/
	{
		command = _strcat(tokenizer, argv[0]); /*concatenar*/
		if (stat(command, &st) == 0)
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
				free(command);
				free_cmd(argv);
				return;
			}
			if (pid == 0)
				execve(command, argv, environ); /*execve*/
		}
		tokenizer = strtok(NULL, ":");
		free(command);
		command =NULL;
	}
	write(STDOUT_FILENO, "command not found\n", 18);
	free_cmd(argv);
}
