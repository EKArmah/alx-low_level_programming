#include "main.h"

/**
 * init_arr - initialize an array to a value
 * @arr: array to initialize
 * @v: value
 * @size: size of array
 *
 * Return: initialized array
 */

void *init_arr(char *arr, char v, unsigned int size)
{
	unsigned int count;

	for (count = 0; count < size; count++)
	{
		arr[count] = v;
	}
	return (arr);
}

/**
 * _calloc - allocates mem for an array using malloc
 * @nmemb: num of elems in array
 * @size: size of each elem
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	arr = init_arr(arr, 0, nmemb * size);
	return (arr);
}
