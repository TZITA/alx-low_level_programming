#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - e p
 * @size: size
 *
 * Return: Apointer or Null.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(shash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	h->shead = NULL;
	h->stail = NULL;

	return (h);
}

/**
 * shash_table_set - ep
 * @ht: ht
 * @key: key
 * @value: value
 *
 * Return: 0 or -1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *tmp;
	char *cpy;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy = strdup(value);
	if (cpy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = cpy;
			return (1);
		}
		tmp = tmp->snext;
	}
	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(cpy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(cpy);
		free(n);
		return (0);
	}
	n->value = cpy;
	n->next = ht->array[i];
	ht->array[i] = n;

	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		n->sprev = tmp;
		n->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = n;
		else
			tmp->snext->sprev = n;
		tmp->snext = n;
	}
	return (1);
}

/**
 * shash_table_get - ep
 * @ht: ht
 * @key: key
 *
 * Return: Value or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *n;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	n = ht->shead;
	while (n != NULL && strcmp(n->key, key) != 0)
		n = n->snext;

	return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - ep
 * @ht: ht
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;

	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - e p
 * @ht: ht
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;

	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - ep
 * @ht: ht
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *n, *tmp;

	if (ht == NULL)
		return;

	n = ht->shead;
	while (n)
	{
		tmp = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = tmp;
	}
	free(head->array);
	free(head);
}
