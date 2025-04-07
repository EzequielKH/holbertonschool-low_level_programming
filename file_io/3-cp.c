#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		dprintf(STDOUT_FILENO, "100\n");
		exit(100);
	}
}

/**
 * main - Copies content from one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with error code on failure.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		dprintf(STDOUT_FILENO, "97\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		dprintf(STDOUT_FILENO, "98\n");
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		dprintf(STDOUT_FILENO, "99\n");
		close_file(fd_from);
		exit(99);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			dprintf(STDOUT_FILENO, "99\n");
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		dprintf(STDOUT_FILENO, "98\n");
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
