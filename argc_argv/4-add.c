#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success), 1 (Error if invalid argument)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/*Check if no arguments are passed*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/*Loop through all arguments (excluding program name)*/
	for (i = 1; i < argc; i++)
	{
		/*Check if each character of the argument is a digit*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/*Convert valid argument to integer and add to sum*/
		sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
