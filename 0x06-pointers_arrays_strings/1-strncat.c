#include "main.h"

/**
 * _strncat - concatenates two string using at most n bytes from src
 * @dest: str to be appended to
 * @src: str to append n bytes of
 * @n: num of bytes to concat
 *
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, count_s = 0, count_d = 0;

	while (src[count_s])
	{
		count_s++;
	}

	while (dest[count_d])
	{
		count_d++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		dest[count_d + i] = src[i];
	}
	if (count_s < n)
	{
		dest[count_d++] = '\0';
	}
	return (dest);
}
