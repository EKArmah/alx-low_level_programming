#include "main.h"

/**
 * main - prints num of args passed in
 * @argc: num of args passed in
 * @argv: args
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
