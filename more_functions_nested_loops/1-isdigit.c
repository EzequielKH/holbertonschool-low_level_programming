#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	/* Check if character is between '0' and '9' */
	if (c >= '0' && c <= '9')
	{
	return (1);  /* Character is a digit */
	}
	else
	{
		return (0);  /* Character is not a digit */
	}
}
