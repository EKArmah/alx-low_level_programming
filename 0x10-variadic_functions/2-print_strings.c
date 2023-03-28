#include "variadic_functions.h"

/**
 * check_null - check of temp str is NULL and replace with (nil) if so
 * @tmp: str to check
 *
 * Return: char * to (nil) or initial char *
 */
char *check_null(char *tmp)
{
	if (tmp == NULL)
	{
		tmp = "(nil)";
	}
	else
	{
		return (tmp);
	}
	return (tmp);
}

/**
 * print_strings - a variadic function that prints strings
 * @separator: printed between each string
 * @n: num of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *temp;
	va_list str_arr;

	va_start(str_arr, n);

	if (n != 0)
	{
		temp = check_null(va_arg(str_arr, char *));
		printf("%s", temp);
		for (count = 0; count < n - 1; count++)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			temp = check_null(va_arg(str_arr, char *));
			printf("%s", temp);
		}
	}
	printf("\n");
	va_end(str_arr);
}
