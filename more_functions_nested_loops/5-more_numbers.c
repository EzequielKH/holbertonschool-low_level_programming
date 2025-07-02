#include <stdio.h>
#include "main.h"

/**
 * more_numbers - entry point
 * @num: variable of the function
 * @veces: variables of times
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int num;
	int veces;
	for (veces = 0; veces < 10; veces++)
	{
		for (num = 0; num <= 14; num++){
			
				if (num >= 10)
				{
					_putchar((num / 10) + '0');
				}
				_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
