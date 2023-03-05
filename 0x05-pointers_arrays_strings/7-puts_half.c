#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, count = 0;

	while (str[count])
	{
		count++;
	}

	count--;
	if (count % 2 == 0)
	{
		for (i = 1 + (count / 2); i <= count; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((count - 1) / 2) + 1; i <= count; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
