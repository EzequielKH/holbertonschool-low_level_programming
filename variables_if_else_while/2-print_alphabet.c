#include <stdio.h>

/*
 * main - entry point
 *
 *
 * Return - Always 0 (success)
 */

int main()
{
	int x;

	srand(time(0));
	x = rand();

	printf("%d \n", x);

	return (0);
}
