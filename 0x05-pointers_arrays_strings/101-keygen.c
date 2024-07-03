#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, n;
	char password[84];

	sum = 0;

	srand(time(NULL));

	for (i = 0; sum < (2772 - 122); i++)
	{
		n = rand() % 94 + 33;  /* printable ASCII characters range from 33 to 126 */
		password[i] = n;
		sum += n;
	}

	password[i] = 2772 - sum;  /* ensure the sum of ASCII values equals 2772 */
	password[i + 1] = '\0';

	printf("%s", password);

	return (0);
}
