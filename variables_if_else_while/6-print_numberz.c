#include <stdio.h>
/**
 *main - entry main
 *
 *Description: the program prints all the digits form 0 to 9, followed by a new line. The numbers convers to their representation
 *ASCII before beeing printed.
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

	return (0);
}
