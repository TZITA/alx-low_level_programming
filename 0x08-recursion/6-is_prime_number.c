#include "main.h"

/**
 * is_prime_number - checks whether a num is prime
 * @n: intiger
 *
 * Return: 1 if prime
 */

int is_prime_number(int n)
{
	int div = 1000;

	if (n <= 0)
	{
		return (0);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	div++;
	return (is_prime_number(n));
}
