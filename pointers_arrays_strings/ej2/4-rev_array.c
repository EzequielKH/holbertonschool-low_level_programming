#include "main.h"

/**
 * reverse_array - entry point
 * @a: pointer a
 * @n: variable n
 * @temporal: array of n
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
