#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc, and initializes it to zero.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if malloc fails or nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL; // If malloc fails, return NULL

    memset(ptr, 0, nmemb * size);

    return ptr; // Return the pointer to the allocated memory
}

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    if (a == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';

    simple_print_buffer(a, 98);

    free(a);

    return (0);
}

