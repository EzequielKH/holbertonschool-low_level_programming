#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	/*Obtener la longitud de la cadena*/
	while (s[length] != '\0')
	{
		length++;
	}

	/*Intercambiar los caracteres desde los extremos hacia el centro*/
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
