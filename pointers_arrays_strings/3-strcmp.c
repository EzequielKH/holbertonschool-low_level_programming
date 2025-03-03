#include "main.h"

/**
 * _strcmp - Compara dos cadenas de caracteres.
 * @s1: Primera cadena a comparar.
 * @s2: Segunda cadena a comparar.
 *
 * Return: Un número negativo si s1 < s2
 *         0 si s1 == s2,
 *         Un número positivo si s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
