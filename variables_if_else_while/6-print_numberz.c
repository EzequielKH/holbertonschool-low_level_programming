#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'main does exist with functions'
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	int a;
	for (a = 0; a < 10 ; a++) 
		putchar((a % 10) + '0');
	putchar('\n');
	return (0);
}
