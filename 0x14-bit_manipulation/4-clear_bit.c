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
	unsigned long int temp_bits_end = ~(1 << index);

	if (index <= MAX_ULONG)
	{
		/* Temp is set to 0 at index with left shift and complement*/
		*n &= temp_bits_end;
		return (1);
	}
	return (-1);
}
