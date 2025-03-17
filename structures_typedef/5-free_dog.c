#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to a dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)  /* Check if the pointer is NULL */
		return;

	/* Free the memory allocated for the name and owner */
	free(d->name);
	free(d->owner);

	/* Finally, free the memory allocated for the dog structure itself */
	free(d);
}
