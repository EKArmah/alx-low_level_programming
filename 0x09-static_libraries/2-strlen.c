#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: string
 *
 * Return: len of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}
