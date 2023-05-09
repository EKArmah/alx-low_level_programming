#include "main.h"

/**
 * read_textfile - reads a text file and prints to STDOUT
 * @filename: name of file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	/* Check of error opening file */
	if (fd == 2)
	{
		return (0);
	}

	buffer = malloc(sizeof(char *) * letters);

	/*Read and write to STDOUT*/
	n_read = read(fd, buffer, letters);
	/* Check if error reading file */
	if (n_read == -1)
	{
		return (0);
	}

	n_written = write(1, buffer, letters);
	if (n_written - letters != 0 || n_written == -1)
	{
		return (0);
	}
	return (n_written);
}
