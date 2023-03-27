#include "function_pointers.h"

/**
 * int_index - searches for an int using cmp fcn that is passed in
 * @array: array to search
 * @size: size of array
 * @cmp: compare function
 *
 * Return: if no match or size <= 0, return -1, if match return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	if (array)
	{
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]) != 0)
			{
				return (count);
			}
		}
		if (count == size)
		{
			return (-1);
		}
	}
	return (-1);
}
