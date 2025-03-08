#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, 
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Square root is not defined for negative numbers */
		return (-1);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function to find the square root of a number
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root if found, or -1 if no square root exists
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n) /* Base case: found the square root */
		return (-1);
	if (guess * guess > n)
		return (guess);
	return (_sqrt_helper(n, guess + 1));
}
