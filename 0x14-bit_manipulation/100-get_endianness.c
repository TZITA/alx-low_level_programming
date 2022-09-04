#include "main.h"

/**
 * get_endianness - ep
 *
 * Return: int.
 */

int get_endianness(void)
{
	int i = 1;
	char *end = (char *)&i;

	if (*end == 1)
	{
		return (1);
	}
	return (0);
}
