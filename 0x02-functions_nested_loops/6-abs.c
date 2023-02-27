#include <stdio.h>
#include "main.h"

/**
 * abs - computes abs val of an int
 * @c: int
 *
 * Return: abs val of c
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
