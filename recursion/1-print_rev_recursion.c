#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print in reverse
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: if we reach the end of the string */
	{
		return;
	}

	_print_rev_recursion(s + 1); /*Recursive call with the next character*/
	_putchar(*s); /* Print the current character after the recursion */
}
