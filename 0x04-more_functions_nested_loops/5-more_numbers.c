#include "main.h"

/**
 * more_numbers - print the numbers 0 to 14, ten times
 * @void: void
 *
 * Return: void
 */
void more_numbers(void)
{
	int count, count2;

	count2 = 0;
	while (count2 < 10)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
			{
				_putchar((count / 10) + 48);
			}
			_putchar((count % 10) + 48);
		}
		count2++;
		_putchar('\n');
	}
}
