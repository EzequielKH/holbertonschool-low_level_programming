#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	/*Loop through all arguments and print each one*/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
