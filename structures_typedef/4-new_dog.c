#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog (dog_t), or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name, len_owner;
	dog_t *doggo;

	for (len_name = 0; name[len_name] != '\0'; len_name++)
		;

	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
		;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc((len_name + 1) * sizeof(char));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		doggo->name[i] = name[i];

	doggo->age = age;

	doggo->owner = malloc((len_owner + 1) * sizeof(char));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	for (i = 0; i <= len_owner; i++)
		doggo->owner[i] = owner[i];

	return (doggo);
}
