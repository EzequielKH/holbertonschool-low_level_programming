#include <stdio.h>
/**
 * main - entry access
 *
 * Description: The program pints all the digits from 0 to 9,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c; /*variable*/

	/*bucle para imprimir todos los digitos del 0 al 9*/
	for (c = '0'; c <= '9'; c++)
	{

		putchar(c); /*Imprine el digito*/

	}
	putchar('\n'); /*Imprime una nueva linea despues de los digitos*/

	return (0); /*retorna 0 para indicar que el programa termino correctamente*/
}
