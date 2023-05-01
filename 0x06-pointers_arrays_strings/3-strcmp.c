#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer indicating result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
