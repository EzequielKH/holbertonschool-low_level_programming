#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Description: Prints the 9 times table from 0 to 9 in the format shown in the example.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (j != 0)
				_putchar(',');

			if (product < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
