#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;  /* If d is NULL, do nothing */

	/* Print name, owner, and age with conditional checks for NULL values */
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
