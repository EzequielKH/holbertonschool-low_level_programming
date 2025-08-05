#include <stdio.h>

/**
 * main - entry point
 * Description: Prints numbers 0 to 9 separated by comma and space
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
