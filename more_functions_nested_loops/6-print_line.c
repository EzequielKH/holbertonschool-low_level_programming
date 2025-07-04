#include <stdio.h>
#include "main.h"

/**
 * print_line - entry point
 *
 * @n: variable of the function
 *
 * Return: always 0 (success)
 */

void print_line(int n)
{

	while (n-- > 0)
	{
		_putchar('_');
	}
		_putchar('\n');
}
