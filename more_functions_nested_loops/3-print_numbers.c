#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @c: variable of the function
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{
	_putchar(c);
	_putchar('\n');
	}
}
