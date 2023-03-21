#include "main.h"

/**
 * count_s - count num of char in s
 * @s: str
 *
 * Return: int; 0 if NULL
 */
int count_s(char *s)
{
	unsigned int temp = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[temp])
	{
		temp++;
	}
	return (temp);
}
/**
 * min_val - determine minimum value b/n 2 values
 * @a: int 1
 * @b: int 2
 *
 * Return: minimum
 */
unsigned int min_val(unsigned int a, unsigned int b)
{
	return (a < b ? a : b);
}
/**
 * string_nconcat - concatenates 2 strings, s1 and n bytes of s2
 * @s1: first str
 * @s2: second str
 * @n: num of bytes needed from s2
 *
 * Return: pointer to new str, or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, c1, c2, j;
	char *conc;

	c1 = count_s(s1);
	c2 = min_val(count_s(s2), n);
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
		for (j = 0; i <= c1 + c2; i++, j++)
		{
			conc[i] = s2[j];
		}
		conc[i] = '\0';
	}
	printf("Conc: %s\n", conc);
	return (conc);
}
