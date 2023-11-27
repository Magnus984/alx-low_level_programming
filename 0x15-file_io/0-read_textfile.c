#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: name of file
 * @letters: letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t char_read_or_written, bytes_read;
	ssize_t *ptr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(letters + 1);
	if (!ptr)
		return (0);
	bytes_read = read(fd, ptr, letters);
	if (bytes_read == -1)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	char_read_or_written = write(1, ptr, bytes_read);
	if (char_read_or_written == -1)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	free(ptr);
	close(fd);
	return (char_read_or_written);
}
