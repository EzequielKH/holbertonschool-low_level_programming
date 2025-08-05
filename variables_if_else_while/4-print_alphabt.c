#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using a while loop.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alfabeto = 'a';

	while (alfabeto <= 'z')
	{
		putchar(alfabeto);
		alfabeto++;
	}

	putchar('\n');

	return (0);
}
