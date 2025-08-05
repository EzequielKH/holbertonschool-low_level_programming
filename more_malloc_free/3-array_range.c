#include "main.h"
#include <stdlib.h>

/**
 * array_range - crea un array de enteros desde min hasta max inclusive
 * @min: valor mínimo
 * @max: valor máximo
 *
 * Return: puntero al array, o NULL si falla o si min > max
 */
int *array_range(int min, int max)
{
    int a;
    int *p;

    if (min > max)
        return (NULL);

    p = malloc(sizeof(int) * (max - min + 1));
    if (p == NULL)
        return (NULL);

    for (a = 0; min <= max; min++, a++)
        p[a] = min;

    return (p);
}
