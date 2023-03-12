#include "main.h"

/**
 * _puts_recursion - function that prints a string using recursion
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\0');
	}
}
