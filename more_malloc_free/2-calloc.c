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

    // Verificar si nmemb o size son 0
    if (nmemb == 0 || size == 0)
        return NULL;

    // Asignar memoria utilizando malloc
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL; // Si malloc falla, devolver NULL

    // Inicializar la memoria a 0 utilizando memset
    memset(ptr, 0, nmemb * size);

    return ptr;
}

/**
 * simple_print_buffer - prints buffer in hexadecimal format
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i = 0;

    while (i < size)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");

        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - Entry point for the program, performs tests
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    // Test case: _calloc(402, sizeof(char))
    a = _calloc(402, sizeof(char));
    if (a != NULL)
    {
        simple_print_buffer(a, 402); // Ver impresión del buffer
        free(a);
    }

    // Test case: _calloc(0, sizeof(int))
    a = _calloc(0, sizeof(int));
    if (a == NULL)
    {
        printf("Memory allocation failed as expected for _calloc(0, sizeof(int))\n");
    }

    // Test case: _calloc(100, 0)
    a = _calloc(100, 0);
    if (a == NULL)
    {
        printf("Memory allocation failed as expected for _calloc(100, 0)\n");
    }

    // Test case: _calloc(50, sizeof(int))
    a = _calloc(50, sizeof(int));
    if (a != NULL)
    {
        simple_print_buffer(a, 50); // Ver impresión del buffer
        free(a);
    }

    return 0;
}
