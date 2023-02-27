#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last dig of int
 * @n: int
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lst;

	if (n < 0)
	{
		lst = -1 * (n % 10);
	}
	else
	{
		lst = n % 10;
	}
	_putchar('0' + lst);
	return (lst);
}
