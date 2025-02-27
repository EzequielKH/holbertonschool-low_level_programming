#include "main.h"

/**
 * _strcpy - Copies a string from src to dest, including the null byte.
 * @dest: Destination buffer.
 * @src: Source string.
 * 
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'; /* Copy the null terminator */

	return ptr;
}
