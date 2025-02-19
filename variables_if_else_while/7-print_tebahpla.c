#include <stdio.h>

/**
 * main - Imprime el abecedario en minúsculas en orden inverso
 *
 * Descripción: El programa imprime todas las letras del abecedario
 * en minúsculas, desde la 'z' hasta la 'a',
 * seguido de una nueva línea
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	/* Imprime las letras desde 'z' hasta 'a' */
	for (i = 'z'; i >= 'a'; i--)

	{
		putchar(i);

	}

	putchar('\n');  /* Imprime una nueva línea después de las letra*/

	return (0);
}
