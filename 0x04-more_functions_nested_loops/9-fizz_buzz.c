#include "main.h"
#include <stdlib.h>

/**
 * main - print numbers from 1 to 100, followed by a new line. But
 * for multiples of three print "Fizz" instead of the number and for
 * multiples of five print "Buzz" and for both print "FizzBuzz".
 * @void: void
 *
 * Return: 0 on success
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}

		if (count != 99)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
