#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));  /* Check if '0' is a digit */

	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));  /* Check if 'a' is a digit */

	return (0);
}
