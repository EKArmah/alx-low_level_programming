#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: num of times \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int count = 0, line = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			line = 0;
			while (line != count)
			{
				_putchar(' ');
				line++;
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
}
