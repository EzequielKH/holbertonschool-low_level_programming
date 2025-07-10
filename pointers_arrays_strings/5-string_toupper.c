#include "main.h"

/**
 * string_toupper - entry point
 * @i: variable
 * Return: always str.
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
