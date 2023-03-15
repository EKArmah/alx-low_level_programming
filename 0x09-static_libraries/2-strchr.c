#include "main.h"
/**
 * _strchr - located a char in a string
 * @s: string to search
 * @c: char to search for
 *
 * Return: a pointer to the first occurence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s  == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
