#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @c: variable of the function
 * Return: always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
