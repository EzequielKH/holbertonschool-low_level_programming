#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string whose length is to be calculated
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /*Base case: if we reach the null terminator*/
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
