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
		if (in_word == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			in_word = 1;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
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
