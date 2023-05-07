#include "main.h"

/**
 * count_bits - counts the number of bits in the binary rep of n
 * @n: decimal
 * @counter: current number of bits
 *
 * Return: number of bits
 */

unsigned long int count_bits(unsigned long int n, unsigned long int counter)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (counter + count_bits(n >> 1, counter));
}

/**
 * get_bit - Retrieve the value of a bit at a given index
 * @n: value in decimal
 * @index: index
 *
 * Return: value or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int counter = 1;
	int bit_value;

	/*Count number of bits in binary of n*/

	counter = count_bits(n, counter);
	if (index >= counter)
	{
		return (0);
	}
	if (index > ULONG_MAX || (index % 1 < 1) && (index % 1 > 0))
	{
		return (-1);
	}

	if (counter == 1)
	{
		return (n & 1);
	}

	bit_value = (n >> index) & 1;

	return (bit_value);
}
