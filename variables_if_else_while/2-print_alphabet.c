#include <stdio.h>
/**
 * main - entry point
 *
 * Return Always 0 (success)
 */

int main()
{
	char alfabeto = 'a';

	while (alfabeto  <= 'z')
	{
		putchar(alfabeto);
		alfabeto++;
	}
	putchar('\n');
	return (0);
}
