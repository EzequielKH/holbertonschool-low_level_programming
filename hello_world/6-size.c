#include <stdio.h>

/**
 *main - Prints the size of various types on the computer
 *
 *Description: This function prints the sizes of different types
 *		(char, int, long int, long long int, and float)
 *		on the computer where the program is compiled and run.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
