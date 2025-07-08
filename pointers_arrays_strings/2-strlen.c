#include "main.h"
/**
 * _strlen - entry point
 * @i: variable i
 * Return: always i (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++);
	return (i);
}
