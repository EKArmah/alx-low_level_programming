#include "main.h"

/**
 * rev_string - fcn that reverses a string
 * @s: str to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp = s[0];
	int count = 0, i = 0;

	while (s[count])
	{
		count++;
	}

	count--;
	while (i < count)
	{
		temp = s[i];
		s[i] = s[count];
		s[count] = temp;
		count--;
		i++;
	}
}
