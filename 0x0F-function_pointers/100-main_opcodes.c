#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function in 2-dig hex
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count_byte = 0;
	char *fcn = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count_byte = 0; count_byte < atoi(argv[1]); count_byte++)
	{
		printf("%02x", fcn[count_byte] & 0xFF);
		if (count_byte < atoi(argv[1]))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
