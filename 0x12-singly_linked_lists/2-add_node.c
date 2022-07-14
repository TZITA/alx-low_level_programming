#include "lists.h"

/**
 * add_node - entry point
 * @head: head
 * @str: string
 *
 * Return: Structure.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *n;

	list_t *new_node = malloc(sizeof(list_t));
	n = strdup(str);

	if (new_node->next == NULL)
	{
		return (NULL);
	}

	new_node->str = n;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
