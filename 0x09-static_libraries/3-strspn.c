#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The initial segment
 * @accept: The bytes to check
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *temp_accept;

	while (*s)
	{
		temp_accept = accept;
		while (*temp_accept)
		{
			if (*s == *temp_accept)
			{
				count++;
				break;
			}
			temp_accept++;
		}
		if (!*temp_accept)
			break;
		s++;
	}
	return (count);
}
