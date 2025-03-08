#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 2)); /* Start checking from 2 */
}

/**
 * check_prime - checks if n is divisible by any number from 2 to sqrt(n)
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 if n is not prime
 */
int check_prime(int n, int i)
{
	if (i * i > n) /* Base case: reached the square root of n */
	{
		return (1); /* n is prime */
	}

	if (n % i == 0) /* If n is divisible by i, it's not prime */
	{
		return (0); /* n is not prime */
	}

	return (check_prime(n, i + 1));
}
