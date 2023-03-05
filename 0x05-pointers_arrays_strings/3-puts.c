#include "main.h"

/**
 * _puts - prints a str to stdout
 * @str: str to print
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
