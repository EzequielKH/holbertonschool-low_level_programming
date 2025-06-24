#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - entry point
 *
 * Return Always 0 (success)
 */

int main()
{


	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
	{
	printf("number is positive \n");
	}
	else if (n < 0)
	{
		printf("number is negative \n");
	}
	else
	{
		printf("number is zero \n");
	}
	return (0);
}
