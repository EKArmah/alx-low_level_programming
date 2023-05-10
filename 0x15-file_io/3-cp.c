#include "main.h"

/**
 * err_handling - execute errors with message
 * @err_val: error value
 * @str: potential string
 *
 * Return: void
 */
void err_handling(int err_val, char *str)
{
	switch (err_val)
	{
		case 97:
			exit(97);
			dprintf("Usage: cp file_from file_to\n");
		case 98:
			exit(98);
			dprintf(2, "Error: Can't read from file %s\n", str);
		case 99:
			exit(99);
			dprintf(2, "Error: Can't write to %s\n", str);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2;
	ssize_t n_write, n_read = 0, n_close1, n_close2;
	char *script;

	if (argc != 3)
		err_handling(97, NULL);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		err_handling(98, argv[1]);

	fd_2 = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP
			| S_IWGRP | S_IROTH);
	if (fd_2 == -1)
		err_handling(99, argv[2]);
	script = malloc(sizeof(char) * 1024);
	if (script == NULL)
		err_handling(98, argv[2]);

	n_write = write(fd_2, script, n_read);
	if (n_write == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
	}
	free(script);
	n_close1 = close(fd_1);
	n_close2 = close(fd_2);
	if (n_close1 == -1 || n_close2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n",
				fd_1 == -1 ? fd_1 : fd_2);
	}
	return (1);
}
