#include "main.h"

/**
 * print_alphabet - Imprime el alfabeto en minúscula
 *
 * Description: Esta función recorre las etras del alfabe
 * desde 'a' hasta 'z'
 * e imprime cada letra utilizando la función `_putchar
 * . Al final, imprime un salto
 * de línea para que el resultado se muestre n una nueva lín
 *
 * Return: Nada. La función es de tipo void, no devuelve ningún val
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
