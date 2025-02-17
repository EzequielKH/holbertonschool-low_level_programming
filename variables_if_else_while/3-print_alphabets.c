#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letter;

	/*Imprime las letras una a una*/
	for (letter = 'a'; letter <= 'z'; letter++)

	{

		putchar(letter);

	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{

		putchar(letter);

	}

	putchar('\n');

	return (0);
}
