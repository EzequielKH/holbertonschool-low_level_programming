#include <stdio.h>
/**
 * Main - entry main
 *
 * Description: the program prints all the digits form 0 to 9,
 * followed by a new line. The numbers convers to their representation
 * ASCII before beeing printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{

	putchar(i + '0');

	}

	putchar('\n');  /* Print a newline character*/

	return (0);
}
