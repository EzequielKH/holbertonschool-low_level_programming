#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	/*Print the number of arguments passed, excluding the program name*/
	printf("%d\n", argc - 1);

	return (0);
}
