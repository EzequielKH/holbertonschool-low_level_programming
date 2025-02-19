#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Description: The program prints all single-digit numbers from 0 to 9,
 * separated by commas and spaces. The last number does not have a comma.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{

	putchar(i + '0');  /* Convert the integer to its ASCII representation */

	if (i != 9)  /* Prevent a comma and space after the last number */
		{

		putchar(',');  /* Print the comma */
		putchar(' ');  /* Print the space */

		}

	}

	putchar('\n');  /* Print a newline after the numbers */

	return (0);
}
