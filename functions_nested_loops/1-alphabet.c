#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - imprime el abecedario en minúscula
 * seguido de salto de líea
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
