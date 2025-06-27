#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void)
{
	int a = 0;
	char alfabeto;

	while (a++ <= 9)
	{
		for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
		_putchar (alfabeto);
		_putchar('\n');
	}
	return;
}
