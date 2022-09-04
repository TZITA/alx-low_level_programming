#include "main.h"

/**
 * flip_bits - ep
 * @n: number
 * @m: num to flip
 *
 * Return: INT.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex;
	unsigned long int bits = 0;

	ex = n ^ m;
	while (ex > 0)
	{
		bits += (ex & 1);
		ex >>= 1;
	}
	return (bits);
}
