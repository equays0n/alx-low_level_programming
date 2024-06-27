#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long num = 612852475143;
	unsigned long long max_prime = 2;
	unsigned long long i;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		max_prime = num;
	}

	printf("%llu\n", max_prime);
	return (0);
}
