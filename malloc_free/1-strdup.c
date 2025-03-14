#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++);

	dup_str = (char *)malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';

	return (dup_str);
}
