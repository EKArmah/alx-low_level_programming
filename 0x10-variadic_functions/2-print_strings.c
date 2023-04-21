#include "variadic_functions.h"

/**
 * print_strings - prints all string params passed thru this variadic fcn
 * @separator: string to be printed between each num
 * @n: num of str passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *temp_hold;

	if (n != 0)
	{
		va_start(args, n);
		for (count = 0; count < n; count++)
		{
			temp_hold = va_arg(args, char *);
			if (!temp_hold)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", temp_hold);
			}

			if (*separator && count != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
