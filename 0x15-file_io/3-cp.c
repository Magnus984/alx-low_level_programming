#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: arguments
 *
 * Return: no return value
 */
int main(int argc, char *argv[])
{
	int fd_one, fd_two, close_one, close_two;
	ssize_t bytes_read, bytes_written;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_one = open(argv[1], O_RDONLY);
	if (buffer)
	{
		bytes_read = read(fd_one, buffer, 1024);
		if (fd_one == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		close_one = close(fd_one);
		if (close_one == -1)
			close_dp(fd_one);

		fd_two = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
		bytes_written = write(fd_two, buffer, bytes_read);
		if (fd_two == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		close_two = close(fd_two);
		if (close_two == -1)
			close_dp(fd_two);
	}
	free(buffer);
	return (0);
}

/**
 * close_dp - closed descriptor handler
 * @fd: file descriptor
 *
 * Return: no return value
 */
void close_dp(int fd)
{
	dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
	exit(100);
}
