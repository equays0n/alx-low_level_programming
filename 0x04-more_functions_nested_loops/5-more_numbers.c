#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14, ten times
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;
	char buffer[30];
	char *ptr;

	for (i = 0; i < 10; i++)
	{
		ptr = buffer;
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				*ptr++ = '1';
			*ptr++ = (j % 10) + '0';
		}
		*ptr++ = '\n';
		*ptr = '\0';

		for (ptr = buffer; *ptr != '\0'; ptr++)
			_putchar(*ptr);
	}
}
