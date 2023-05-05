#include "main.h"
#include <math.h>


/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar(0 + '0');
	}
	if (n == 1)
	{
		putchar(1 + '0');
	}

	if (n > 1)
	{
		print_binary(n >> 1);
		if (n & 1)
		{
			putchar (1 + '0');
		}
		else
		{
			putchar (0 + '0');
		}
	}
}
