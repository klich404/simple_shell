#include "holberton.h"

/**
 * handle_sigtstp - cancels the ctrl + c signal, allowing the program
 * to run even ctrl + c i called
 * @sig: the signal
 */
void handle_sigtstp(int sig)
{
	_printf("stop not allowed\n")
}

/**
 * main - the main function
 * Return: 0
 */

int main(void)
{
	struct sigaction sa;

	sa.sa_handler = &handle_sigtstp;
	sigaction(SIGTSTP, &sa, NULL);
	sa.sa_flags - SA_RESTART;

	if (isatty(0) == 0)
	{
		non_interactive_mode();
	}
	else
	{
		interactive_mode();
	}
	return (0);
}
