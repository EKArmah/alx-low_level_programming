#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: min value in array
 * @max: max value in array
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int count;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < (max - min) + 1; count++)
	{
		arr[count] = min + count;
	}
	return (arr);
}
