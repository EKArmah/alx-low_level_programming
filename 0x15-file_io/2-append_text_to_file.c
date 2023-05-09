#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: string to append
 *
 * Return: 1 on success, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
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
