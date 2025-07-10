#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: variable char
 */
void print_rev(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
