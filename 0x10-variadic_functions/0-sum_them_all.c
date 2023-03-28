#include "variadic_functions.h"

/**
 * sum_them_all - variadic function that sums all params
 * @n: num of elems
 *
 * Return: sum of all elems or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_elems;
	unsigned int count;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum_elems, n);
	for (count = 0; count < n; count++)
	{
		sum = sum + va_arg(sum_elems, int);
	}
	va_end(sum_elems);
	return (sum);
}
