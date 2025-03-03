#include "main.h"

/**
 * reverse_array - Invierte el contenido de un array de enteros.
 * @a: Puntero al array de enteros.
 * @n: Número de elementos en el array.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
