#include <stdio.h>

/**
 * main - Imprime todas las combinaciones posibles de números de un solo dígito.
 * 
 * Descripción: El programa imprime los números del 0 al 9, separados por comas y
 * seguidos de un espacio, en orden ascendente. La última combinación no debe tener una coma.
 * 
 * Retorna: Siempre 0 (success).
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{
		putchar(i + '0');  /* Convierte el número a su carácter A*/

		if (i != 9)  /* Para no agregar coma después del últimnumeros */
		
		{

			putchar(',');  /* Imprime la coma */
			putchar(' ');  /* Imprime el espacio */
	
		}
	}

	putchar('\n');  /* Imprime una nueva línea después de todos los n�ros */

	return (0);
}
