#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Se inicializa la semilla para los números aleatorios*/
	n = rand() - RAND_MAX / 2; /* Genera un número aleatorio en el rango [-RAND_MAX, RAND_MAX]*/

	if (n > 0)
	{

		printf("%d is positive\n", n);
	}

	else if (n == 0)

	{
		printf("%d is zero\n", n);
	}

	else

	{
		printf("%d is negative\n", n);

	}

	return (0);
}
