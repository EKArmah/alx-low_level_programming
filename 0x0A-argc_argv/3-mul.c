#include "main.h"

/**
 * main - multiplies args
 * @argc: num of args
 * @argv: args
 *
 * Return: 0 on success
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
