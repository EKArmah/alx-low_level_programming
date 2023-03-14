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
	int s1_val = 0, s2_val = 0, diff;

	while (s1[s1_val])
	{
		s1_val++;
	}

	while (s2[s2_val])
	{
		s2_val++;
	}

	if (s1_val > s2_val)
	{
		diff = 1;
	}
	else if (s1_val < s2_val)
	{
		diff = -1;
	}
	else
	{
		diff = 0;
	}
	return (diff);
}
