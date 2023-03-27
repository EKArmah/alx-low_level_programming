#include "3-calc.h"

/**
 * main - entry point to operator project
 * @argc: number of arguments passed
 * @argv: arguments passed in
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int first, sec, operated;

	if (atoi(argv[3]) == 0 && 
	(strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	first = atoi(argv[1]);
	sec = atoi(argv[3]);
	operated = get_op_func(argv[2])(first, sec);
	printf("%d\n", operated);
	return (0);
}
