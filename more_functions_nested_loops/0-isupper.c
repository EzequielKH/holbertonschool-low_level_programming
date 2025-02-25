#include "main.h"

/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')  /* Check if character is between 'A' and 'Z' */
	{
		return (1);  /* Character is uppercase */
	}
	else
	{
		return (0);  /* Character is not uppercase */
	}
}
