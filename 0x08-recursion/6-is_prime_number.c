#include "main.h"

/**
 * check_prime - Checks if a number is prime.
 * @n: The number to be checked.
 * @i: The current divisor being tested.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
