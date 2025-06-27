#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - entry point
 * Description: wawa main description
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}

	else {
		return(0);
	}
}
