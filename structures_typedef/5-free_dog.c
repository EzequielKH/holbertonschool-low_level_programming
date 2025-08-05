#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libera la memoria asignada a un perro
 * @d: puntero a la estructura dog_t a liberar
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
