#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Description - print all combo of 2 digits twice
 * Print only smallest combo of two digits
 * Numbers should not repeat
 * Only use putchar fcn
 *
 * Return: 0 on success
 */

int main(void)
{
	int fst_dig = 0, scd_dig;

	while (fst_dig < 99)
	{
		scd_dig = fst_dig + 1;
		while (scd_dig < 100)
		{
			putchar(48 + (fst_dig / 10));
			putchar(48 + (fst_dig % 10));
			putchar(' ');
			putchar(48 + (scd_dig / 10));
			putchar(48 + (scd_dig % 10));

			if (fst_dig != 98 || scd_dig != 99)
			{
				putchar(',');
				putchar(' ');
			}
			scd_dig++;
		}
		fst_dig++;
	}
	putchar(10);
	return (0);
}
