#include "main.h"

/**
 * is_prime_number - checks whether a num is prime
 * @n: intiger
 *
 * Return: 1 if prime
 */

int is_prime_number(int n)
{
	int div;

	if (div == 1)
	{
		return (1);
	}
	else
	{
		if (n % div == 0)
			return (0);
		else
			div = div - 1;
		is_prime_number(n);
	}
}
