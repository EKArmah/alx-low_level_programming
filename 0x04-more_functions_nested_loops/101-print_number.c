#include "main.h"

/**
 * get_last_int - retrieve last int of n
 * @s: int
 *
 * Return: void
 */
void get_last_int(int s)
{
	if (s < 0)
	{
		_putchar('-');
		s = s * -1;
	}

	if (s == 0)
	{
		_putchar('0');
	}

	if (s / 10)
	{
		get_last_int(s / 10);
	}

	_putchar(s % 10 + '0');
}

/**
 * print_number - prints any integer using putchar
 * @n: int to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	get_last_int(n);
}
