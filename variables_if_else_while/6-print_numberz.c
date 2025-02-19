#include <stdio.h>
/**
 *main - entry main
 *
 *return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');  /* Convert the integer to its ASCII character representation*/
	}
	putchar('\n');  /* Print a newline character*/

	return 0;
}
