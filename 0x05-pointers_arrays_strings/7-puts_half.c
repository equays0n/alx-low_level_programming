#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int length = 0, n, i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2 + 1;
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
