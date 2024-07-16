#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: The pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
    return (NULL);
}
