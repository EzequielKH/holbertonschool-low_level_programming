#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: wawawwa "wawaw"
 * Return: Always 0 (success)
 */

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
