#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (n-- && (*dest++ = *src++))
		;
	if (n < 0)
		*dest = '\0';
	return (temp);
}
