#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _copy_string - copies a string manually
 * @src: source string
 * @dest: destination string
 *
 * Return: void
 */
void _copy_string(char *src, char *dest)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* Null-terminate the destination string */
}

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
	int name_len = 0, owner_len = 0;

	/* Allocate memory for a new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Calculate the length of name and owner manually */
	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	/* Allocate memory for the dog's name and copy it manually */
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_copy_string(name, new_dog->name);

	/* Allocate memory for the owner's name and copy it manually */
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_copy_string(owner, new_dog->owner);

	/* Set the dog's age */
	new_dog->age = age;

	return (new_dog);
}
