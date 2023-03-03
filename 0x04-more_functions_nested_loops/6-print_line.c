#include "main.h"

/**
 * print_line - print a straight line
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
