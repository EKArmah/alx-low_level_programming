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
	int prime_stat;

	if (n % i == 0)
	{
		prime_stat = 0;
		return (prime_stat);
	}
	else
	{
		if (i >= 10)
		{
			prime_stat = 1;
			return (1);
		}
		prime_stat = 1;
		i++;
		prime_stat = prime_wrap(n, i);
	}
	return (prime_stat);
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

	prime = prime_wrap(n, i);

	return (prime);
}
