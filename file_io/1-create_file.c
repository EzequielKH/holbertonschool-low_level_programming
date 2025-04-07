#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates a file with the given content.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Write the content to the file */
	if (text_content != NULL)
	{
		/* Calculate the length of the text_content string */
		while (text_content[len])
			len++;

		write_bytes = write(fd, text_content, len);
		if (write_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close(fd);

	return (1);
}
