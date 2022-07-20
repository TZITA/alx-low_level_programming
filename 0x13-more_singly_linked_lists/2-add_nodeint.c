#include "lists.h"

/**
 * add_nodeint - entry point
 * @head: struct
 * @n: integer
 *
 * Return: Struct.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
