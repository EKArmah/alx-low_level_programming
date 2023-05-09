#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: null terminated string to write to file
 *
 * Return: 1 on success -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == 2)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		n_write = write(fd, text_content, strlen(text_content));
		if (n_write == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
