#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'main does exist with functions'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alfabeto = 'a';

	while (alfabeto  <= 'z')
	{
		putchar(alfabeto);
		alfabeto++;
	}
	putchar('\n');
	return (0);
}
