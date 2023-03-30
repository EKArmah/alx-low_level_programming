#include "main.h"

/**
 * get_app_type_print - retrieve needed function for given spec char
 * @print_spec: va_list
 * @frm: specifier description in form of a char
 *
 * Return: pointer to needed function
 */

int (*get_app_type_print(va_list print_spec, char *frms))
(va_list print_spec)
{
	int type_count = 0, char_count = 0;
	char *temp;

	get_type type_ls[] = {
		{"c", print_char},
		{"s", print_s},
		{"%", print_mod}};

	while (type_count < 3)
	{
		temp = type_ls[type_count].frm;

		if (frms == *temp)
		{
			char_count += type_ls[type_count].f(print_spec);
		}
		type_count++;
	}
	return (char_count);
}

/**
 * _printf - printf undetermined number and type of input to std out
 * @format: std str to print
 *
 * Return: number of characters printed
 */

int _printf(const char * format, ...)
{
	char *temp_char_holder;
	va_list print_specs;
	int final_counter = 0, counter = 0, ind_str = 0;

	va_start(print_specs, format);

	while (format[counter])
	{
		temp_char_holder = format[counter];
		if (*temp_char_holder == '%')
		{
			final_counter += get_app_type_print(print_specs, format[counter += 1]);
		}
		else
		{
			while (temp_char_holder[ind_str] != '%')
			{
				putchar(temp_char_holder[ind_str]);
				ind_str++;
				final_counter++;
			}
		}
		counter++;
	}
	return (final_counter);
}
