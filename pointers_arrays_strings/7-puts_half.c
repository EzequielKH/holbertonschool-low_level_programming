#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0, start;

	/*Calcular la longitud de la cadena*/
	while (str[length] != '\0')
	{
		length++;
	}

	/*Determinar el punto de inicio para imprimir la segunda mitad*/
	start = (length + 1) / 2;

	/*Imprimir la segunda mitad*/
	while (str[start] != '\0')
	{
		write(1, &str[start], 1);
		start++;
	}

	/*Imprimir un salto de líne*/
	write(1, "\n", 1);
}
