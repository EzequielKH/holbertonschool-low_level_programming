#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - asigna memoria usando malloc y sale si falla
 * @b: número de bytes a asigna
 *
 * Return: un puntero a la memoria asignada
 * o termina el programa con status 98 si falla la asignació
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
