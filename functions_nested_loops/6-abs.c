#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute the absolute value of
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);  /* If the number is negative, return its negation (i.e., positive value)*/
	}
	else
	{
		return (n);   /* If the number is already positive or zero, return it as is*/
	}
}
