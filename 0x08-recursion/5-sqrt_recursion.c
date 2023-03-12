#include "main.h"

/**
 * root_calc - recurse through multiplication of
 * ints to determine sqrt
 * @i: int
 *
 * Return: power of i
 */

int root_calc(int i)
{
	return (i * i);
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: -1 if no natural root, else sqrt
 */

int _sqrt_recursion(int n)
{
	int i = 1, curr = 0;

	if (!(n / 1) || n < 0)
	{
		return (-1);
	}

	while (curr < n)
	{
		curr = root_calc(i);
		i++;
	}

	if (curr == n)
	{
		return (i - 1);
	}

	return (-1);
}
