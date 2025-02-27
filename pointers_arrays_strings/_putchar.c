#include <unistd.h>

/**
 * _putchar - Escribe un carácter en la salida estándar
 * @c: El carácter a imprimir
 *
 * Return: 1 en éxito, -1 en error y establece errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
