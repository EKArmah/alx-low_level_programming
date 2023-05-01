#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: location to copy str to
 * @src: str to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
		{
			for (; i < n; i++)
			{
				dest[i] = '\0';
			}
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
