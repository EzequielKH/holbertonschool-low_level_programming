#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: wawawa main
 * Return: Always 0 (success)
 */

int print_last_digit(int c)
{
	int b;
	b = c % 10;
	if (b < 0)
	b = -b;
	_putchar(b + '0');
	return(b);
}
