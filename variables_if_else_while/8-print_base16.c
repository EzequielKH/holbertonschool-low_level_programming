#include <stdio.h>
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Description: 'main does exist with functions'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;
	for (a = 0; a < 10 ; a++)
		putchar((a % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);

}
