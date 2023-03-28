#include "variadic_functions.h"

/**
 * print_numbers - a variadic function that prints numbers
 * @separator: string to occur between each num
 * @n: num of elems
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list num_arr;

	va_start(num_arr, n);

	printf("%d", va_arg(num_arr, int));
	for (count = 0; count < n - 1; count++)
	{
		if (separator)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(num_arr, int));
	}
	printf("%d\n", va_arg(num_arr, int));
}
