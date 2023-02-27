#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: char to inspect
 *
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
