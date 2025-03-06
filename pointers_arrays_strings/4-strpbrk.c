#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer to the first occurrence in `s` of any character
 *         from `accept`, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
    int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
