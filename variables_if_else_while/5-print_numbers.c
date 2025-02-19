#include <stdio.h>
/**
 *main - entry access
 *
 *return: always 0 (success)
 */
int main(void)
{
	char c; /*variable*/

	for (c = '0'; c <= '9'; c++) 
	{
	putchar(c);
	}
	putchar('\n');

	return 0;
}

