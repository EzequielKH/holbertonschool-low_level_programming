#include <stdio.h>
/**
 *main - entry access
 *
 *return: Always 0 (success)
 */
int main(void)
{
	char c; /*variable*/

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	}
	putchar('\n');
	return 0;
}
