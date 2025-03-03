#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int in_word = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		int j = 0;
		int is_separator = 0;

		while (separators[j])
		{
			if (str[i] == separators [j])
			{
				is_separator = 1;
				break;
			}
			j++;
		}

		if (in_word == 0 && (str[i] >= 'a' && str[i] <= 'z' ))
		{
			str[i] -= 32;
			in_word = 1;
		}
		else if (is_separator)
		{
			in_word = 0;
		}
		else
		{
			in_word = 1;
		}
		i++;
	}
	return str;
}
