#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - entry point
 * @a: variable of the function
 * Return: always 0 (success)
 */
void print_most_numbers(void)
{
        int a;
        for (a = 48; a <= 57; a++)
        {
        _putchar(a);
        _putchar('\n');
        }
}
