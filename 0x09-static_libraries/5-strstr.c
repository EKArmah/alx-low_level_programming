#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: long string to be searched
 * @needle: substring to search for in haystack
 *
 * Return: pointer to beginning of needle
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack++;
	}
	return ('\0');
}
