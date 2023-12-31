#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		count = 0;
		while (*(text_content + count) != '\0')
			count++;
		bytes_written = write(fd, text_content, count);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
