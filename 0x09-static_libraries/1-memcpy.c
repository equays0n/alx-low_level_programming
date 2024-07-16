
i#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: The destination buffer
 * @src: The source buffer
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
		*dest++ = *src++;
	return (temp);
}
