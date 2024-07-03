#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize the first character if it's a lowercase letter */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}

	/* Traverse the string and capitalize subsequent words */
	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
				(str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
				 str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
				 str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				 str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				 str[i - 1] == '}'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}

	return (str);
}
