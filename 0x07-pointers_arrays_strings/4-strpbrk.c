#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: str to find in s
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, count_s = 0, lowest_s = 0, count_acc = 0;

	while (s[count_s])
	{
		count_s++;
	}

	while (accept[count_acc])
	{
		count_acc++;
	}

	lowest_s = count_s;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j] && j < lowest_s)
			{
				lowest_s = j;
			}
		}
	}

	if (lowest_s == count_s + 1)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < lowest_s; i++)
		{
			s++;
		}
		return (s);
	}

}
