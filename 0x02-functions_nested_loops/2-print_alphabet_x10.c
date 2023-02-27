#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case x10
 * @void: empty
 *
 * Return: empty
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
