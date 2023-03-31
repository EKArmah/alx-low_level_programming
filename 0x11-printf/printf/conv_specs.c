#include "main.h"

/**
 * print_char - prints a char
 * @arg: va_list to retrieve char
 *
 * Return: num of chars printed; invariably one
 */

int print_char (va_list arg)
{
	int count = 1;
	int curr_char;
       
	curr_char = va_arg(arg, int);

	putchar(curr_char);
	return (count);
}

/**
 * print_str - prints a string
 * @arg: va_list to retrieve str
 *
 * Return: num of chars in str
 */

int print_str (va_list arg)
{
	int count = 0;
	char *temp_str;

	temp_str = va_arg(arg, char *);
	while (temp_str[count] != '\0')
	{
		putchar(temp_str[count]);
		count++;
	}
	return (count);
}

/**
 * print_mod - prints mod sign
 * @arg: va_list to retrieve mod sign
 *
 * Return: num of signs, ideally 1
 */

int print_mod (va_list arg)
{
	int count = 0;
	int curr_char;

	curr_char = va_arg(arg, int);
	putchar(curr_char);
	return (count);
}