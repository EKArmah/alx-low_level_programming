#include "main.h"

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
	unsigned int count;
	void *new_arr;

	if (new_size == old_size || ptr == NULL)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}



}
