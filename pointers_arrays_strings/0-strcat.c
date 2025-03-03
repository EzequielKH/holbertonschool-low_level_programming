#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Encuentra el final de dest */
	while (dest[i] != '\0')
		i++;

	/* Copia src al final de dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Agrega el null terminator */
	dest[i] = '\0';

	return dest;
}
