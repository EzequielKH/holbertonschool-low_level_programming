#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
       	char letter;

	/* Imprime todas las letras en minúscula */
    for ( letter = 'a'; letter <= 'z'; letter++) 
    {
        putchar(letter); 
    }

   /* Imprime una nueva linea */
    putchar('\n'); 

    return (0);
}
