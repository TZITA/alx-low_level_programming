#include "hash_tables.h"

/**
 * key_index - ep
 * @key: key
 * @size: size
 *
 * Return: Index of key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
