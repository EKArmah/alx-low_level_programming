#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * w/o 2 & 4
 * @void: empty
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count != 2 && count != 4)
		{
			_putchar(count + 48);
		}
	}
	_putchar('\n');
}
