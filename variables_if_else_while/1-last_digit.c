#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));  /* Inicializa la semilla para números aleatorios*/
	n = rand() - RAND_MAX / 2;  /* Genera un número aleatorio en el rango [-RAND_MAX, RAND_MAX]*/

	last_digit = n % 10;  /* Obtiene el último dígito den*/
		
	printf("Last digit of %d is %d", n, last_digit);

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
