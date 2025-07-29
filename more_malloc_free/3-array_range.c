#include "main.h"

/*
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int a;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (NULL);
	for (a = 0; min <= max; min++, a++)
		p[a] = min;
	return (p);
}
