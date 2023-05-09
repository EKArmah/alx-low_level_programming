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

	fd = open(filename, O_RDONLY);
	/* Check of error opening file */
	if (fd == 2)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	/*Read and write to STDOUT*/
	n_read = read(fd, buffer, letters);
	/* Check if error reading file */
	if (n_read == -1)
	{
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written - n_read != 0 || n_written == -1)
	{
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_written);
}
