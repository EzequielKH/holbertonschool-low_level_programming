#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - imprime el abecedario en minúsculas 10 veces
 */
void print_alphabet_x10(void)
{
	int a;
	char alfabeto;

	for (a = 0; a < 10; a++)
	{
		for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)

		{
			_putchar(alfabeto);
		}
		_putchar('\n');
	}
}
