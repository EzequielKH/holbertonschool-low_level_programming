#include "main.h"
/**
 * swap_int - entry point
 * @a: pointer to a
 * @b: pointer to b
 * @c: variable c
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
