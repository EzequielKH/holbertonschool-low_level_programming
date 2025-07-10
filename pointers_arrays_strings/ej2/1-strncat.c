#include "main.h"

/**
 * _strncat - entry point
 * @dest: str1
 * @src: str2
 * @n: var 
 */
char *_strncat(char *dest, char *src, int n)
{
	
	strncat(dest, src, n);
	return(dest);
}
