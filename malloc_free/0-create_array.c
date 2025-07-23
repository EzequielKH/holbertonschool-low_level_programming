#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: size of the string
 * @c: character of the string
 * @a: variable
 * @s: pointer
 * Return: 's' if success
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
