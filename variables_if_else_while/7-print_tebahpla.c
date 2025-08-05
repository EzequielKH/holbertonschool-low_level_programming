#include <stdio.h>
#include "_putchar.c"
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alfabeto = 'z';

	while (alfabeto >= 'a')
	{
		putchar(alfabeto);
		alfabeto--;
	}
	putchar('\n');
	return (0);
}
