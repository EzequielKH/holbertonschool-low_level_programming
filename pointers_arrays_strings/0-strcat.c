#include "main.h"

/**
 * _strcat - entry point
 * @dest: string 1
 * @src: string 2
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++);

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
