#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Return: 0 on success
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha > 96; alpha--)
	{
		putchar(alpha);
	}
	putchar(10);

	return (0);
}
