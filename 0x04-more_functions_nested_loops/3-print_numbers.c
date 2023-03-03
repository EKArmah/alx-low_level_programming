#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * @void: empty
 *
 * Return: void
 */

void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		_putchar(count + 48);
	}
	_putchar('\n');
}
