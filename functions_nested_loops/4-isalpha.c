#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: wwawa "cositas"
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) {
		return (1);
	} else {
		return (0);
	}
}
