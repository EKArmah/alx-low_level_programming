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
	int sep = 44;

	for (alpha = 48; alpha < 58; alpha++)
	{
		putchar(alpha);
		if (alpha < 57)
		{
			while (sep > 31)
			{
				putchar(sep);
				sep -= 12;
			}
		}
		sep = 44;
		
	}
	putchar(10);

	return (0);
}
