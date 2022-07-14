#include "lists.h"

/**
 * add_node_end - entry point
 * @head: structure
 * @str: string
 *
 * Return: Structure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *n;

	list_t *new_node = malloc(sizeof(list_t));

	n = strdup(str);

	new_node->str = n;
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		printf("[%u] %s\n", new_node->len, n);
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
		last_node = last_node->next;
		printf("[%u] %s\n", new_node->len, n);
		}
		last_node->next = new_node;
	}
	return (*head);
}
