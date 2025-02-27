#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int length = 0;

	/*Obtener la longitud de la cadena*/
	while (s[length] != '\0')
	{
		length++;
	}

	/*Imprimir la cadena en orden inverso*/
	while (length > 0)
	{
		length--;
		write(1, &s[length], 1);
	}

	/*Imprimir un salto de líne*/
	write(1, "\n", 1);
}
