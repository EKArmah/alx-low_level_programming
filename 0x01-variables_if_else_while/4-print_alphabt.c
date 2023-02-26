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

	for (alpha = 97; alpha < 123; alpha++)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
	}
	putchar(10);

	return (0);
}
