#include "main.h"

/**
 * root_calc - recurse through multiplication of
 * ints to determine sqrt
 * @i: int
 * @root: original val
 *
 * Return: power of i
 */

int root_calc(int i, int root)
{
	int temp;

	temp = i * i;

	if (temp == root)
	{
		return (i);
	}
	else if (temp < root)
	{
		i++;
		return (root_calc(i, root));
	}
	else
	{
		return (-1);
	}
	return (i);
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: -1 if no natural root, else sqrt
 */

int _sqrt_recursion(int n)
{
	int i = 1, curr;

	if (!(n / 1) || n < 0)
	{
		return (-1);
	}

	curr = root_calc(i, n);

	if (curr != -1)
	{
		return (curr);
	}
	else
	{
		return (-1);
	}
}
