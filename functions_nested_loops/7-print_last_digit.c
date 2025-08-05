#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int b;

	b = c % 10;
	if (b < 0)
		b = -b;

	_putchar(b + '0');
	return (b);
}
