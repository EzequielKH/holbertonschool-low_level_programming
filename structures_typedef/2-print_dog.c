#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the elements of a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: If an element is NULL, prints (nil) instead
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	printf("%f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
