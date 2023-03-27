#include "function_pointers.h"

/**
 * array_iterator - executes given function on each arr elem
 * @array: array of elements
 * @size: size of array
 * @action: function to be executed on each elem
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int count;

	if (array && action)
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
