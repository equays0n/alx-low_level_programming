#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++))
		;
	return (temp);
}
