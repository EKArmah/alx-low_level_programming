#include <stdio.h>

/**
 * main - print alphabet in lower and upper case
 * @void: empty
 *
 * Return: 0 on success
 */

int main(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 65; alpha < 91; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
