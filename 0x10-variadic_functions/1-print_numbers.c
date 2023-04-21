#include "variadic_functions.h"

/**
 * print_numbers - prints all num params passed thru this variadic fcn
 * @separator: string to be printed between each num
 * @n: num of ints passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	if (n != 0)
	{
		va_start(args, n);
		for (count = 0; count < n; count++)
		{
			printf("%d", va_arg(args, int));

			if (*separator && count < n - 1)
			{
				printf("%s", separator);
			}
			else
			{
				printf("\n");
			}
		}
	}
	va_end(args);
}
