#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/*Encuentra el final de dest*/
	while (dest[i] != '\0')
		i++;

	/*Copia hasta n caracteres de src a dest*/
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
		i++;
		j++;
	}

	/*Asegurar el null terminator si n es menor que la longitud de src*/
	dest[i] = '\0';

	return (dest);
}
