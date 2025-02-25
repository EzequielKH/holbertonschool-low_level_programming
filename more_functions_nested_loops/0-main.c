#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));  /* Check if 'A' is uppercase */

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));  /* Check if 'a' is uppercase */

	return (0);
}
