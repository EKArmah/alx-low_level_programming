#include "lists.h"

/**
 * fcn_first - prints a string before main is called
 *
 * Return: void
 */

void __attribute__ ((constructor)) fcn_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
