#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');  /* Imprime 1 si es alfabético, 0 si no lo es */
	r = _isalpha('o');
	_putchar(r + '0');  /* Imprime 1 si es alfabético, 0 si no lo es */
	r = _isalpha(108);  /* 108 es el código ASCII para 'l' */
	_putchar(r + '0');  /* Imprime 1 si es alfabético, 0 si no lo es */
	r = _isalpha(';');
	_putchar(r + '0');  /* Imprime 0 porque ';' no es una letra */
	_putchar('\n');  /* Nueva línea para separar los resultados */
	return (0);
}
