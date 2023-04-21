#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: va_list holding char to print
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_int - prints an int
 * @args: va_list holding int to print
 *
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
 * print_float - prints a float
 * @args: va_list holding float to print
 *
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
 * print_str - prints a str
 * @args: va_list holding str to print
 *
 * Return: void
 */

void print_str(va_list args)
{
	char *temp_h;

	temp_h = va_arg(args, char *);
	switch (temp_h == NULL)
	{
		case 1:
			printf("(nil)");
			break;
		case 0:
			printf("%s", temp_h);
			break;
	}
}

/**
 * print_all - prints anything passed through a variadic function
 * @format: list of types of args passed into the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int count_form = 0, itr = 0;
	char *spec_ls = "cifs";
	va_list args;

	spec_fcn get_spec_fcn[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};
	va_start(args, format);
	while (format && *(format + itr))
	{
		if (strchr(spec_ls, *(format + itr)) != NULL)
		{
			switch (format[count_form])
			{
				case 'c':
					get_spec_fcn[0].fcn(args);
					break;
				case 'i':
					get_spec_fcn[1].fcn(args);
					break;
				case 'f':
					get_spec_fcn[2].fcn(args);
					break;
				case 's':
					get_spec_fcn[3].fcn(args);
					break;
			}
			if (format[count_form + 1] != '\0')
			{
				printf(", ");
			}
		}
		count_form++;
		itr++;
	}
	printf("\n");
	va_end(args);
}
