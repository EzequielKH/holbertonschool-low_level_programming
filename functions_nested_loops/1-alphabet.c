#include <stdio.h>

void print_alphabet(void)
{
	char alfabeto = 'a';

	while (alfabeto  <= 'z')
	{
		putchar(alfabeto);
		alfabeto++;
	}
	putchar('\n');

	return;
}
