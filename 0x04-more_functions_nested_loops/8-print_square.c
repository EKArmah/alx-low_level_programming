#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int count1, count2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count1 = 0; count1 < size; count1++)
		{
			for (count2 = 0; count2 < size; count2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
