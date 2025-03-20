#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char * and returns void
 *
 * Description: This function takes a string and a function pointer.
 * It calls the function pointed to by `f` with `name` as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
