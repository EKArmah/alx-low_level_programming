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
	int i, j, k, x;

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
						for (k = 44; k > 31;)
						{
							putchar(k);
							k -= 12;
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
