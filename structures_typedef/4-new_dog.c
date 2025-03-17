#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @str: string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
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
	int name_len, owner_len;

	/* Allocate memory for a new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Calculate the length of name and owner manually */
	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/* Allocate memory for the dog's name and copy it using strncpy */
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->name, name, name_len + 1);

	/* Allocate memory for the owner's name and copy it using strncpy */
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strncpy(new_dog->owner, owner, owner_len + 1);

	/* Set the dog's age */
	new_dog->age = age;

	return (new_dog);
}
