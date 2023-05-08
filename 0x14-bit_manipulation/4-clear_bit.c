#include "main.h"

#define CHAR_BYTE 8
#define MAX_ULONG (sizeof(unsigned long int) * CHAR_BYTE)

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: value to alter
 * @index: location of change of bit
 *
 * Return: 1 if successful, -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp_bits_end = 0;

	if (index <= MAX_ULONG)
	{
		/*Right shift n by index, and | 1 to affect index*/
		temp_bits_end = *n;
		temp_bits_end = (*n >> index) & 0;

		/*Shift back to create empty canvas to be filled*/
		temp_bits_end <<= index;
		temp_bits_end |= *n;

		*n = temp_bits_end;
		return (1);
	}
	return (-1);
}
