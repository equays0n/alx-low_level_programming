#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string to print
 */
int main(void)
{
	char *str = "I do not fear computers.";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
