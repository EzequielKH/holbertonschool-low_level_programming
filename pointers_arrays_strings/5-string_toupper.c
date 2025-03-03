#include "main.h"

/**
 * string_toupper - Convierte todas las letras minúsculas de una cadena a mayúsculas.
 * @str: Puntero a la cadena de caracteres.
 * 
 * Return: Puntero a la cadena modificada.
 */
char *string_toupper(char *str)
{
    int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}
