#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all params passed thru this variadic fcn
 * @n: num of params passed
 *
 * Return: sum; if n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(args, n);
		for (count = 0; count < n; count++)
		{
			sum += va_arg(args, int);
		}
	}
	va_end(args);
	return (sum);
}
