#include "main.h"

/**
 * factorial - calculates factorial of a num using recursion
 * @n: number to calc factorial
 *
 * Return: calculated factorial
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	return (1);
}
