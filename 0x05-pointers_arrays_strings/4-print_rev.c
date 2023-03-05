#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
	}

	count--;
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');

}
