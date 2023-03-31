#include "main.h"
#include "conv_specs.c"

/**
 * get_app_type_print - retrieve needed function for given spec char
 * @frm: specifier description in form of a char
 *
 * Return: pointer to needed function
 */

int (*get_app_type_print(char frms))
(va_list print_spec)
{
	int type_count = 0;
	char *temp;

	get_type type_ls[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_mod}};

	while (type_count < 3)
	{
		temp = type_ls[type_count].frm;

		if (frms == *temp)
		{
			return (type_ls[type_count].f);
		}
		type_count++;
	}
	return (NULL);
}

/**
 * buffer_count_retr - buffer function to retrieve cumulated char count
 * @print_spec: va_list
 * @forms: current char specifier to be called
 *
 * Return: final char count
 */

int buffer_count_retr(va_list print_spec, char forms)
{
	int str_count;
	str_count = get_app_type_print(forms)(print_spec);

	return (str_count);
}

/**
 * _printf - printf undetermined number and type of input to std out
 * @format: std str to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list print_specs;
	int final_counter = 0, counter = 0;

	va_start(print_specs, format);

	while (format[counter] != '\0')
	{
		while (format[counter] != '%')
		{
			putchar(format[counter]);
			final_counter++;
			counter++;
		}
		final_counter += buffer_count_retr(print_specs, format[counter += 1]);
		printf("Current final count: %d\n", final_counter);
		counter++;
	}

	printf("Final count: %d\n", final_counter);
	return (final_counter);
}
