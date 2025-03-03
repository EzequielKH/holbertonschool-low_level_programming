#include "main.h"

/**
 * _strncpy - Copies at most `n` characters from a string `src` to `dest`.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];  /* Copy characters from src to dest */
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;  /* Return the destination string */
}
