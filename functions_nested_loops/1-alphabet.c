#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - imprime el abecedario en minúsculas seguido de salto de línea
 */
void print_alphabet(void)
{
	char alfabeto = 'a';

	while (alfabeto <= 'z')
	{
		_putchar(alfabeto);
		alfabeto++;
	}
	_putchar('\n');
}
