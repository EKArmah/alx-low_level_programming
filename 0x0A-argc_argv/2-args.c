#include "main.h"

/**
 * main - print all incoming args
 * @argc: num of args
 * @argv: args
 *
 * Return: 0 on success
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
