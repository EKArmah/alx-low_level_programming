#include "main.h"

/**
 * reverse_array - reverses the content of an array of ints
 * @a: array to be reversed
 * @n: number of elements in a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count = 0, full = n - 1, temp_i;

	while (count < full)
	{
		temp_i = a[count];
		a[count] = a[full];
		a[full] = temp_i;

		full--;
		count++;
	}

}
