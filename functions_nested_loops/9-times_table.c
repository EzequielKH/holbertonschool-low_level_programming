#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Description: Prints the 9 times table from 0 to 9 in the format shown in the example.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)  /* Loop through rows (0 to 9) */
	{
		for (j = 0; j < 10; j++)  /* Loop through columns (0 to 9) */
		{
			product = i * j;

			if (j != 0)  /* To avoid leading space for the first number */
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10)  /* Single digit numbers */
			{
				if (j != 0)  /* Print a space for alignment */
				_putchar(' ');
				_putchar('0' + product);
			}
			else  /* Double digit numbers */
			{
				_putchar('0' + (product / 10));  /* Tens place */
				_putchar('0' + (product % 10));  /* Ones place */
			}
		}
		_putchar('\n');  /* Newline after each row */
	}
}
