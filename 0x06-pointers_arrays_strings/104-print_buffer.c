#include "main.h"
#include <stdio.h>

/**
 * is_printable - checks if a character is printable
 * @c: the character to check
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
    return (c >= 32 && c <= 126);
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: number of bytes to print from the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			if (is_printable(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
