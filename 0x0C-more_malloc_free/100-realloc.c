#include "main.h"

/**
 * min_size - determine the minimum size b/n two values
 * @s1: first size
 * @s2: second size
 *
 * Return: min size
 */
unsigned int min_size(unsigned int s1, unsigned int s2)
{
	return (s1 < s2 ? s1 : s2);
}

/**
 * fill_wrapper - fills in mem block with old content
 * @ptr: old mem block with content
 * @new_ptr: new mem block
 * @o_size: size of ptr
 * @n_size: size of new_ptr
 *
 * Return: new_ptr filled
 */

char *fill_wrapper(
		char *ptr, char *new_ptr,
		unsigned int o_size, unsigned int n_size)
{
	unsigned int count, min;

	min = min_size(o_size, n_size);
	for (count = 0; count < min; count++)
	{
		new_ptr[count] = ptr[count];
	}
	return (new_ptr);
}

/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: pointer to orig mem block
 * @old_size: size of old mem block
 * @new_size: size of new mem block
 *
 * Return: pointer to new mem block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_arr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		printf("new size: %u\n", new_size);
		if (ptr != NULL)
		{
			free(ptr);
		}
		return (NULL);
	}

	new_arr = malloc(new_size);

	if (new_arr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		printf("New arr formed but ptr is: NULL\n");
		free(ptr);
		return (new_arr);
	}
	else
	{
		printf("New Arr formed, calling wrapper function...\n");
		new_arr	= fill_wrapper(ptr, new_arr, old_size, new_size);
	}
	return (new_arr);
}
