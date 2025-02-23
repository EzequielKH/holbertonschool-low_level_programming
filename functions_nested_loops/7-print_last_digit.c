#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;  /* Get the last digit*/

	if (last_digit < 0)
	last_digit = -last_digit;  /* Make it positive if negative*/

	_putchar('0' + last_digit);  /* Print the last digit*/

	return (last_digit);  /* Return the value of the last digit*/
}
