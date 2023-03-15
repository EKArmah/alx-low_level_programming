#include "main.h"

/**
 * _strcpy - copies the str pointed to by src including \0
 * to the buffer pointed to by dest
 * @src: src str to copy
 * @dest: destination to copy to
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count))
	{
		*(dest + count) = *(src + count);
		count++;
	}

	*(dest + count) = '\0';
	return (dest);
}
