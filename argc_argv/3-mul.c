#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success), 1 (Error if not exactly two arguments)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/*Multiply the two numbers*/

	num1= atoi(argv[1]);
	num2= atoi(argv[2]);

	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
