#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int i)
{
	/*Check if the character is either uppercase or lowercase */
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	return (0);
}
