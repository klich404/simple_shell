#include "holberton.h"

/**
 * main - the main function
 * Return: 0
 */

int main(void)
{
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
