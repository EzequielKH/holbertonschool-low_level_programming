#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	/*Print the name of the program*/
	printf("%s\n", argv[0]);

	return (0);
}
