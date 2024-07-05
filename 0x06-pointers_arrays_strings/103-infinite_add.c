#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	int carry = 0;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	i--;
	j--;
	size_r--;
	for (k = 0; k < size_r; k++, i--, j--)
	{
		n = carry;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
			break;
		carry = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || carry)
		return (0);
	for (k--, l = 0; l < k; k--, l++)
	{
		carry = r[k];
		r[k] = r[l];
		r[l] = carry;
	}
	return (r);
}
