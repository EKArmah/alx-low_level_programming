#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * struct form - struct form
 *
 * @frm: char pointer to type description
 * @f: function pointer
 */
typedef struct form
{
	char *frm;
	void (*f)(va_list);
} get_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar (int c);

#endif /*VARIADIC_FUNCTIONS_H*/
