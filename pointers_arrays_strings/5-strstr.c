#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The main string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0') /* If needle is empty, return haystack */
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0') /* If the full needle is found */
			return (haystack + i);
	}

	return (NULL); /* If no match is found */
}
