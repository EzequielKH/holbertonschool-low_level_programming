#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int n;

	n=strcmp(s1, s2);

	if (n == 0)
	{
	return (0);
	}
	return (n);
}
