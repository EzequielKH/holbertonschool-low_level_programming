#include "main.h"

/**
 * print_alphabet_x10 - Imprime el alfabeto en minúsculas 10 veces
 *                      seguido de una nueva línea cada vez
 *
 * Description: Esta función utiliza un bucle anidado para imprimir
 *              el alfabeto 10 veces, utilizando la función `_putchar
 *              para imprimir cada letra, y un salto de línea al fina
 *              de cada impresión completa del alfabeto.
 *
 * Return: Nada. La función es de tipo `void` y no devuelve ningún val.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	/* Bucle para imprimir el alfabeto 10 veces */
	for (i = 0; i < 10; i++)
	{
		/* Bucle para imprimir las letras de la 'a' a la 'z' */
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);/* Imprime cada letra */
		}
		_putchar('\n');
	}
}
