#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(long n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (long i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	while (n % 3 == 0)
	{
		max_prime = 3;
		n /= 3;
	}

	for (long i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
		while (n % (i + 2) == 0)
		{
			max_prime = i + 2;
			n /= (i + 2);
		}
	}

	if (n > 4)
		max_prime = n;

	return (max_prime);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;

	printf("%ld\n", largest_prime_factor(number));
	return (0);
}
