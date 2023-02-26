#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Return: 0 on success
 */

int main(void)
{
	int alpha, i;
	char sep[] = ", ";

	for (alpha = 48; alpha < 58; alpha++)
	{
		putchar(alpha);
		if (alpha < 57)
		{
			for (i = 0; i < 2; i++)
			{
				putchar(sep[i]);
			}
		}
		
	}
	putchar(10);

	return (0);
}
