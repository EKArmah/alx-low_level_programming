#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

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


int _printf(const char *format, ...);
int print_s(va_list arg);
int print_char(va_list arg);
int print_mod(va_list arg);

#endif /*MAIN_H*/
