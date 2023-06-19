#include "lists.h"

/**
 * add_node_end - a function to add a node at the end
 * @head: head double pointer
 * @str: value of the node
 *
 * Return: Structure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *n;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	n = strdup(str);

	new_node->str = n;
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*head);
}
