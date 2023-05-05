#include "main.h"
#include <math.h>
/**
 * gen_num_digin_bin - determine num of digits of n in its binary form
 * @num: n
 *
 * Return: num of digits
 */

int gen_num_digin_bin(int num)
{
	int counter = 0, iter = 1;

	while (num >> iter)
	{
		counter++;
		iter++;
	}

	return (counter + 1);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int dig_count, curr_bit;

	/*Determine the number of digits in n*/
	dig_count = gen_num_digin_bin(n);

	/*Isolate each bit, from left with right shift and AND 1 operation*/
	for (; dig_count > 0; dig_count--)
	{
		curr_bit = n >> (dig_count - 1);

		if (curr_bit & 1)
		{
			putchar(1 + '0');
		}
		else
		{
			putchar(0 + '0');
		}
	}

}
