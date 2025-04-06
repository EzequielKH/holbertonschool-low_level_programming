#include "lists.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}
