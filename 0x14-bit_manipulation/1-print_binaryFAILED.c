#include "main.h"

/**
 * get_remainder - determine remainder after fractional multiplication
 * @n_orig: original value
 * @check_quot: current quotient
 *
 * Return: remainder
 */
int get_remainder(unsigned long int n_orig, unsigned long int check_quot)
{
	int rem, val_a;

	val_a = check_quot * 2;
	rem = n_orig - val_a;
	printf("Val A: %d\nRem: %d\n", val_a, rem);
	return (rem);
}

/**
 * buffer_fcn - recursively called to print binary conversion by fractional multiplication
 * @n_orig: original dec to convert
 * @n_mod: quotient decimal to convert, modified n_orig
 *
 * Return: quotient
 */
void buffer_fcn(unsigned long int n_orig,
		unsigned long int n_mod)
{
	unsigned long int check_quot = n_mod;
	int rem;

	if (n_mod >= 2)
	{
		check_quot = n_mod * 0.5;
		rem = get_remainder(n_orig, check_quot);
		/*printf("REM: %d\nOriginal n: %ld\nQuotient: %ld\n", rem, n_orig, check_quot);*/
		buffer_fcn(n_orig, check_quot);
		/*putchar(rem + '0');*/
	}
	printf("%d", rem);
	/*putchar(rem + '0');*/
	/*if (check_quot == 1)
	{
		putchar(check_quot + '0');
	}*/
	/*return (0);*/
}

/**
 * print_binary - converts a decimal to binary and prints
 * @n: decimal to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		putchar(n + '0');
	}
	else
	{
		buffer_fcn(n, n);
	}
}
