#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Description - print all combo of 3 digits
 * Print only smallest combo of two digits
 * Numbers should not repeat
 * Only use putchar fcn
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, j = 49, x = 50;

	for (i = 48; i < j; i++)
	{
		for (j = 49; j < x; j++)
		{
			for (x = 50; x < 58; x++)
			{
				if ((i != j) && (i < j) && (j < x))
				{
					putchar(i);
					putchar(j);
					putchar(x);
					if ((i != 55) || (j != 56) || (x != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
