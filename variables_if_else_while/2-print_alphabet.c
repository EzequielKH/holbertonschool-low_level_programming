#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char letter;

	/*Usamos putchar para imprimir las letras una a una*/
	for (letter = 'a'; letter <= 'z'; letter++)

	{

		putchar(letter); /*Imprime la letra*/

	}
	
	putchar('\n'); /*Imprime una nueva líne*/

	return (0);

}
