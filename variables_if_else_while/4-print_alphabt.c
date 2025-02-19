#include <stdio.h>
/**
 *main - entry access
 *
 * Description: The program pints all the letters of alphabet in lowercase 
 *except letters 'e' and 'q', followed by a new line.
 *return: Always 0 (success)
 */
int main(void)
{
	char c; 
/*variable*/

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
