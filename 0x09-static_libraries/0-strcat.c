#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: str to be appended to
 * @src: str to append
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, count_src = 0, count_dest = 0;

	while (src[count_src])
	{
		count_src++;
	}

	while (dest[count_dest])
	{
		count_dest++;
	}

	for (i = 0; i <= count_src; i++)
	{
		dest[count_dest + i] = src[i];
	}
	return (dest);
}
