#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct call_spec_fcn - struct call_spect_fcn
 * @spec_name: char pointer to type
 * @fcn: function pointer
 */
typedef struct call_spec_fcn
	{
		char *spec_name;
		void (*fcn)(va_list);
	} spec_fcn;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H*/
