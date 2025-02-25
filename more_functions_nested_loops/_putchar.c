#include <unistd.h>  /* Para la función write */

/**
 * _putchar - escribe un carácter a la salida estándar
 * @c: El carácter a imprimir
 *
 * Return: El número de caracteres impresos (1), o -1 en caso de error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
