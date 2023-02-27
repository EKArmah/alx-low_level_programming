#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints "_putchar"
 * @void: empty
 *
 * Return: 0 on success
 */

int _putchar(int)
{
	char ptch[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		putchar(ptch[count]);
	}
	putchar('\n');
	return (0);
}
