#include "main.h"
/**
 * print_diagonal - entry point
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int diagonal, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (diagonal = 0; diagonal < n; diagonal++)
	{
		for (space = 0; space < diagonal; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
