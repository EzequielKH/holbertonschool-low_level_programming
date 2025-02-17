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
	int last_digit;

	srand(time(0)); /*Inicializa la semilla para números aleatorio*/

	n = rand() - RAND_MAX / 2; /*Genera un número aleatori*/

	last_digit = n % 10; /*Obtiene el último dígito d*/


	printf("Last digit of %d is %d", n,);
	printf("%d", last_digit);

	if (last_digit > 5)

	{

		printf(" and is greater than 5\n");

	}

	else if (last_digit == 0)

	{

		printf(" and is 0\n");

	}

	else if (last_digit < 6 && last_digit != 0)

	{

		printf(" and is less than 6 and not 0\n");

	}

	return (0);
}
