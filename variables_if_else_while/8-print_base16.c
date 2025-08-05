#include <stdio.h>
#include "_putchar.c"
/**
 * main - Entry point
 *
 * Description: Prints numbers 0-9 and letters a-f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		_putchar((a % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
		_putchar(b);

	_putchar('\n');
	return (0);
}
