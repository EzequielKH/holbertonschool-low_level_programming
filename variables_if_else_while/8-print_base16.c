#include <stdio.h>

/**
 * main - Imprime los números de base 16 en minúsculas.
 *
 * Descripción: El programa imprime los números de base 16 (del 0 al 9
 * y de la 'a' a la 'f') en minúsculas, seguidos de una nueva línea.
 *
 * Retorna: Siempre 0.
 */
int main(void)
{
	int i;

	/* Imprimir los números del 0 al 9*/
	for (i = 0; i <= 9; i++)

	{

		putchar(i + '0');  /* Convierte el número a su carácter A*/

	}

	/* Imprimir las letras de 'a' a 'f' */
	for (i = 10; i <= 15; i++)

	{

		putchar(i - 10 + 'a');  /* Convierte el número a su carácter hexadecim*/

	}

	putchar('\n');  /* Imprimir una nueva líne*/

	return (0);
}
