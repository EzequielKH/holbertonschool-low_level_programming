#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: if we reach the end of the string */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call with the next character */
}
