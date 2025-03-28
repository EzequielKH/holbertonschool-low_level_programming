#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0) /* Base case: 0! is 1 */
	{
		return (1);
	}

	return (n * factorial(n - 1)); /* Recursive case: n * (n-1)! */
}
