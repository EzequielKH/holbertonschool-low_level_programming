#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - entry point
 *
 *
 * Return - Always 0 (success)
 */

int main()
{
	int n, y;

	srand(time(0));
	n = rand();

	y = n % 10;
	printf("The last digiht of %d is %d \n", n, y);

	return (0);
}
