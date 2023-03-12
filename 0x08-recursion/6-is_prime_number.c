#include "main.h"

/**
 * prime_wrap - check if n divisible by y
 * @n: original n
 * @i: current int to check if prime
 *
 * Return: 0 if divisible, 1 if not
 */

int prime_wrap(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - check if n is prime
 * @n: integer
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2, prime;

	if (n == 1 || n < 0)
	{
		return (0);
	}

	while (i < 10)
	{
		prime = prime_wrap(n, i);
		i++;
		if (prime == 0)
		{
			return (0);
		}
	}

	return (prime);
}
