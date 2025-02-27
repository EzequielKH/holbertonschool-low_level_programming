#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	/*Imprimir coma y espacio solo si no es el último elemen*/
	if (i < n - 1)
		{
			printf(", ");
		}
	}

	/*Nueva línea al fina*/
	printf("\n");
}
