#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int hsh, count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= size; count++)
		{
			hsh = 0;
			while (hsh != size - count)
			{
				_putchar(' ');
				hsh++;
			}
			while (hsh != size)
			{
				_putchar('#');
				hsh++;
			}
			_putchar('\n');
		}
	}
}
