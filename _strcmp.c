#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: is a pointer
 * @s2: is a pointer
 * Return: s1 - s2 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != 00 || s2[x] != 00; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
