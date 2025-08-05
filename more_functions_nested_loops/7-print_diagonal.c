#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 * Return: void
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
