#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: full string
 * @accept: prefix substring
 *
 * Return: num of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j, is_found = 0;

	for (i = 0; s[i]; i++)
	{
		is_found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				is_found = 1;
			}
		}
		if (is_found == 0)
		{
			return (count);
		}
	}

	return (count);
}
