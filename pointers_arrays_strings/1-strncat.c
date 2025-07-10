#include "main.h"

/**
 * _strncat - entry point
 * @dest: str1
 * @src: str2
 * @n: var
 * Return: always 0.
 */
char *_strncat(char *dest, char *src, int n)
{	
	int a, b;

	for (a = 0; dest[a] != '\0'; a++);
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
