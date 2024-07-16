#include "main.h"

/**
 * _strncpy - copies a string, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n-- && (*dest++ = *src++))
		;
	while (n-- > 0)
		*dest++ = '\0';
	return (temp);
}
