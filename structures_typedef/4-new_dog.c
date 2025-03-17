#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)  /* Check if malloc failed */
		return (NULL);

	/* Allocate memory and copy the name */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)  /* Check if malloc for name failed */
	{
		free(new_dog);  /* Free memory for dog structure */
		return (NULL);
	}
	/* Copy the name into the new dog's name */
	strcpy(new_dog->name, name);

	/* Allocate memory and copy the owner */
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)  /* Check if malloc for owner failed */
	{
		free(new_dog->name);  /* Free memory for name */
		free(new_dog);  /* Free memory for dog structure */
		return (NULL);
	}
	/* Copy the owner into the new dog's owner */
	strcpy(new_dog->owner, owner);

	new_dog->age = age;  /* Set the dog's age */

	return (new_dog);  /* Return the pointer to the new dog */
}
