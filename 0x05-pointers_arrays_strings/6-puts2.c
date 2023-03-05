#include "main.h"

/**
 * puts2 - prints every other char of a str
 * @str: string to iterate through
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count])
	{
		count++;
	}

	while (count % 2 == 0)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
