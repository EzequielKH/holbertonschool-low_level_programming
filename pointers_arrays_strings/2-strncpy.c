#include "main.h"
/**
 * _strncpy - entry point
 * @dest: str 1
 * @src: str 2
 * @n: var n
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return(dest);
}
