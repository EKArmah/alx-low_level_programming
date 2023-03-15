#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: str that memory points to
 * @b: constant byte
 * @n: num of bytes to fill memory with
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
