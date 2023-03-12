#include "main.h"

/**
 * _strlen_recursion - function that returns len of a string
 * using recursion
 * @s: string to count
 *
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int count;

	if (!(*s))
	{
		return (0);
	}
	else if (*s)
	{
		count = 1 + _strlen_recursion((s + 1));
	}
	return (count);
}
