#include "main.h"

/**
 * reverse_array - entry point
 * @a: pointer a
 * @n: variable n
 * @temporal: array of n
 */

void reverse_array(int *a, int n)
{
	int temporal[n];

	for (int i = 0; i < n; i++)
	{
		temporal[i] = a[n - i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = temporal[i];
	}
}
