#include "main.h"


/**
 * _pow - calculates the power of a value
 * @val: base of power
 * @expo: exponent
 *
 * Return: 1 if expo is 0 or calc'd value
 */

unsigned int _pow(int val, int expo)
{
	int base_power = val;

	if (expo == 0)
	{
		return (1);
	}

	while (expo > 1)
	{
		base_power *= val;
		expo--;
	}
	return (base_power);
}

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary number in form of a string
 *
 * Return: 0 if invalid str or conversion
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, counter, iter = 0, b_size;

	if (b == NULL)
	{
		return (sum);
	}

	b_size = strlen(b);
	for (iter = 0, counter = strlen(b); iter < b_size; iter++, counter--)
	{
		if (b[iter] == '0' || b[iter] == '1')
		{
			sum += ((b[iter] - '0') * _pow(2, counter - 1));
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
