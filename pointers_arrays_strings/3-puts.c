#include "main.h"
#include <stdio.h>
/**
 * _puts - entry point
 * @str: string
 */

void _puts(char *str)
{
	int i;
	for (i = 0 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
