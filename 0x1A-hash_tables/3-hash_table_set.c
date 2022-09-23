#include "hash_tables.h"

/**
 * hash_table_set - ep
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 *
 * Return: 0 or -1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *cpy;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	cpy = strdup(value);
	if (cpy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = cpy;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(cpy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = cpy;
	n->next = ht->array[i];
	ht->array[i] = n;

	return (1);
}
