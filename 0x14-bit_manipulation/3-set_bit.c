#include "main.h"

/**
 * set_bit - ep
 * @n: bit
 * @index: index
 *
 * Return: int.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
