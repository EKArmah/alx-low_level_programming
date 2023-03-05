#include "main.h"
#include <stdlib.h>
/**
 * print_array - prints n elements of an array of ints
 * @a: array of ints
 * @n: num of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i <= n - 2)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
