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
	
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}

	return (0);
}
