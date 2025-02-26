#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the traingle.
 *
 * Description: This function prints a right-angled triangle
 * using the '#' character, with spaces on the left, followed
 * by a newline at the end. If the size is 0 or less, only a
 * newline is printed.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{

			if (j <= size - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
