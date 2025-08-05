#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet excluding 'e', 'o', and 'q'.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alfabeto = 'a';

	while (alfabeto <= 'z')
	{
		if (alfabeto != 'e' && alfabeto != 'o' && alfabeto != 'q')
			putchar(alfabeto);
		alfabeto++;
	}

	putchar('\n');

	return (0);
}
