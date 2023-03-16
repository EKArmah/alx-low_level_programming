#include "main.h"
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: args
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc - 1; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
