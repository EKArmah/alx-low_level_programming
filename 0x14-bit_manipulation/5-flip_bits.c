#include "main.h"

#define CHAR_BYTE 8
#define MAX_ULONG (sizeof(unsigned long int) * CHAR_BYTE)

/**
 * flip_bits - determine the number of bits needed
 * to flip from one number to another
 * @n: first number to transition from
 * @m: second number to transition to
 *
 * Return: number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0, cmp_vals;
	unsigned long int i;

	for (i = 0; i < MAX_ULONG; i++)
	{
		/*AND 1 each value to determine value of least bit*/
		cmp_vals = (n & 1) ^ (m & 1);
		/*XOR will be 0 if values are the same and 1 if otherwise*/
		if (cmp_vals == 1)
		{
			/*Increment flip count if different*/
			flip_count++;
		}
		n >>= 1;
		m >>= 1;
	}

	return (flip_count);
}
