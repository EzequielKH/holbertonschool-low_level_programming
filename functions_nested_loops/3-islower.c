#include "main.h"

/**
 * _islower - Verifica si un carácter es minúscul
 *
 * @c: El carácter a verificar
 *
 * Return: 1 si c es una letra minúscula, 0 en caso contrario
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);  /*Retorna 1 si es minúscula*/
	}
	else
	{
		return (0);  /*Retorna 0 si no es minúscul*/
	}
}
