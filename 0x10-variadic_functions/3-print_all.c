#include "variadic_functions.h"

/**
 * print_char - prints char
 * @c: va_list pointint to char to print
 *
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints int
 * @i: va_list pointing to int to print
 *
 * Return: void
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - prints float
 * @f: va_list pointing to float to print
 *
 * Return: void
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_str - prints tmp, replace with (nil) if NULL tmp
 * @tmp: va_list pointint to string to print
 *
 * Return: void
 */

void print_str(va_list tmp)
{
	char *temp1;

	temp1 = va_arg(tmp, char *);
	if (temp1 == NULL)
	{
		temp1 = "(nil)";
		printf("%s", temp1);
	}
	printf("%s", temp1);
}

/**
 * print_all - variadic function that prints anything
 * @format: list of all types of args passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int format_count = 0, type_count = 0;
	va_list mix_arr;
	char *temp;

	get_type type_ls[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(mix_arr, format);
	while (format[format_count])
	{
		while (type_count < 4)
		{
			temp = type_ls[type_count].frm;
			if (format[format_count] ==
				*temp)
			{
				type_ls[type_count].f(mix_arr);

				switch (format[format_count + 1] != '\0')
				{
					case 1:
						printf(", ");
						break;
					case 0:
						printf("\n");
						break;
				}
			}
			type_count++;
		}
		type_count = 0;
		format_count++;
	}
	va_end(mix_arr);
}
