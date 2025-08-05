#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatena dos cadenas s1 y s2,
 * copiando hasta n bytes de s2
 * @s1: primera cadena
 * @s2: segunda cadena
 * @n: número máximo de bytes de s2 a concate
 * Return: puntero a una nueva cadena resultante,
 * o NULL si falla la asignació
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;

	p = malloc(len_s1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
