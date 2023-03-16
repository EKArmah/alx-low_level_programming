#include "main.h"

/**
 * main - print the name of a program followed by a newline
 * @argc: num of elems in argv
 * @argv: array of inputs
 *
 * Return: 0 on success
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	char *temp;

	temp = argv[0];
	printf("%s\n", temp);

	return (0);
}
