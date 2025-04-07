#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_exit - Prints an error message and exits with a given code.
 * @code: The exit code to return.
 * @message: The error message to print.
 */
void error_exit(int code, char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}

/**
 * main - Copies content from one file to another.
 * @argc: The number of arguments.
 * @argv: The arguments passed to the program.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	/* Check if the number of arguments is correct */
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	/* Open the source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		char error_message[128];
		snprintf(error_message, sizeof(error_message), "Error: Can't read from file %s", argv[1]);
		error_exit(98, error_message);
	}

	/* Open (or create) the destination file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		char error_message[128];
		snprintf(error_message, sizeof(error_message), "Error: Can't write to file %s", argv[2]);
		error_exit(99, error_message);
	}

	/* Copy the content from file_from to file_to */
	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
			error_exit(99, "Error: Can't write to file");

	}

	/* Close both file descriptors */
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
