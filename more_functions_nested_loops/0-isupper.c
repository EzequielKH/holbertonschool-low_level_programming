#include <stdio.h>
#include "main.h"

/**
 * _isupper - entry point
 * @c: variable of the function
 * Return: always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
