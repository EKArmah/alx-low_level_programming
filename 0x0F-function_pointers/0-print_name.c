#include "function_pointers.h"

/**
 * print_name - prints name using fcn in argument
 * @name: name to print
 * @f: function that prints name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
