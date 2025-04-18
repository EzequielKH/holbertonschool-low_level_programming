#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file for appending */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, do nothing */
	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[len])
			len++;

		/* Write the content to the file */
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
