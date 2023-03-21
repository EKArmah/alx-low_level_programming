#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to alloc'd mem, if failed exit 98
 */

void *malloc_checked(unsigned int b)
{
	void *ran;

	ran = malloc(b);

	if (ran == NULL)
	{
		exit(98);
	}
	return (ran);
}
