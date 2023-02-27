#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabets in lower case
 * @void: empty
 *
 * Return: empty
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
