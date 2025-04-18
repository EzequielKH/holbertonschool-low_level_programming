#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The destination buffer.
 * @src: The source buffer.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
