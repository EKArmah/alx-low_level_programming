#include "main.h"

/**
 * _memcpy - copies an area of memory
 * @dest: area of memory to copy to 
 * @src: area of memory to copy from
 * @n: number of bytes of memory to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
