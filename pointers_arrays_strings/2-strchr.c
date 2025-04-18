#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of `c` in `s`,
 *         or NULL if `c` is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* Check if c is the null terminator */
	if (*s == c)
	return (s);

	return (NULL);
}
