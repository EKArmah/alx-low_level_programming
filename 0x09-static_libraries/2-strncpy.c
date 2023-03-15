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
		if (*src == '\0')
		{
			for (; i < n; i++)
			{
				*dest = '\0';
			}
			return (dest);
		}
		*dest = *src;
		i++;
		dest++;
		src++;
	}

	return (dest);
}
