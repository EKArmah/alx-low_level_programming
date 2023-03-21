#include "main.h"

/**
 * create_array - creates an array of chars and init with char
 * @size: size of array
 * @c: char to init with
 *
 * Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	
	for (count = 0; count < size; count++)
	{
		arr[count] = c;
	}
	return (arr);
}
