#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic chars
 * @c: char to inspect
 *
 * Return: 1 if letter, 0 otherwse
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
