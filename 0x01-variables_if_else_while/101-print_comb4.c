#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits,
 * separated by ", " and in ascending order, with three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 48; digit2 <= 57; digit2++)
		{
			for (digit3 = 48; digit3 <= 57; digit3++)
			{
				if (digit1 < digit2 && digit2 < digit3)
				{
					putchar(digit1);
					putchar(digit2);
					putchar(digit3);

					if (digit1 < 55 || digit2 < 56 || digit3 < 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
