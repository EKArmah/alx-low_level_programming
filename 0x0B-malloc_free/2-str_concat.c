#include "main.h"

/**
 * s_len - counts length of string
 * @s: str to count
 *
 * Return: len of s
 */

int s_len(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	return (count);
}

/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: ssecond str
 *
 * Return: new mem space with both str
 */

char *str_concat(char *s1, char *s2)
{
	int c1 = 0, c2 = 0, i, j;
	char *conc;

	c1 = s_len(s1);
	c2 = s_len(s2);
	conc = malloc(sizeof(char) * (c1 + c2 + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	if (c1 == 0)
	{
		for (i = 0; i < c2; i++)
		{
			conc[i] = s2[i];
		}
		conc[i++] = '\0';
		return (conc);
	}
	else
	{
		for (i = 0; i < c1; i++)
		{
			conc[i] = s1[i];
		}
		if (c2 == 0)
		{
			conc[i++] = '\0';
			return (conc);
		}
		else
		{
			for (j = 0; i < c1 + c2; i++, j++)
			{
				conc[i] = s2[j];
			}
			conc[i++] = '\0';
		}
	}
	return (conc);
}
