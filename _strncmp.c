#include "holberton.h"

/**
 * _strncmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the number of bytes who we want to compare
 * Return: 0 if success or -1 if it fail
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (s1[i] == s2[i])
		{
			if (i == (n - 1))
				return (0);
		}
	}
	return (-1);
}
