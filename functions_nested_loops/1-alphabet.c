#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
	char alfabeto = 'a';

	while (alfabeto  <= 'z')
	{
		_putchar(alfabeto);
		alfabeto++;
	}
	_putchar('\n');

	return;
}
