#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Return: 0 on success
 */

int main(void)
{
	int alpha = 48;

	while (alpha + 39 < 103)
	{
		if (alpha > 57)
		{
			putchar(alpha + 39);
		}
		else
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar(10);

	return (0);
}
