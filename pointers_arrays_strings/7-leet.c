#include "main.h"

/**
 * leet - Encodes a string into 1337 (Leetspeak).
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	int i;
	char leet_chars[] = "aAeEoOtTlL";  // The characters to be replaced
	char leet_replacements[] = "4433007711";  // Their replacements

	for (i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			str[i] = leet_replacements[j];
		}
	}

	return str;
}
