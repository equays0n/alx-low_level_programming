#include "main.h"

/**
 * find_sqrt - Finds the natural square root of a number.
 * @n: The number to find the square root of.
 * @root: The current root to test.
 *
 * Return: If n has a natural square root - the natural square root.
 *         If n does not have a natural square root - -1.
 */
int find_sqrt(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
