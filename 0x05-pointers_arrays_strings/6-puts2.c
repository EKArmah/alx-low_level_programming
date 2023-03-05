#include "main.h"

/**
 * puts2 - prints every other char of a str
 * @str: string to iterate through
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, count = 0;

	while (str[count])
	{
		count++;
	}

	count--;
	while (i <= count)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
