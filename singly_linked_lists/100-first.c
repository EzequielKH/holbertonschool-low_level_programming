#include <stdio.h>

/**
 * first - Function that runs before main
 *
 * This function is marked with the constructor attribute,
 * so it executes automatically before the main function.
 */
void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
