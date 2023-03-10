#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Description - print all combo of 2 digits
 * Print only smallest combo of two digits
 * Numbers should not repeat
 * Only use putchar fcn
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if ((i != 56) || (j != 57))
				{
					for (k = 44; k > 31;)
					{
						putchar(k);
						k -= 12;
					}
				}
			}
		}
	}
	putchar(10);
	return (0);

}
