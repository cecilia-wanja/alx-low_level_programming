#include "main.h"

/**
 * is_prime - find a prime number
 * @i: input value
 * @j: input value
 * Return: boolean value
 */

int is_prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

/**
* is_prime_number - returns 1 if the input integer is a prime number, otherwise 0
* @n: input
* Return: 1 if integer, otherwise 0
*/

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
