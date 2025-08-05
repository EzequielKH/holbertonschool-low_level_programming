#include "main.h"
#include <stdlib.h>

/**
 * _calloc - asigna memoria para un array de nmemb elementos
 * de size bytes cada uno,
 * e inicializa toda la memoria a cero.
 * @nmemb: número de elemento
 * @size: tamaño en bytes de cada elemeno
 * Return: puntero a la memoria asignada,
 * o NULL si falla o si nmemb o size es 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return ((void *)p);
}
