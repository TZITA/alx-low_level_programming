#include "lists.h"

/**
 * add_dnodeint_end - e p
 * @head: head
 * @n: data
 *
 * Return: address of new element or Null if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end = *head;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	new->prev = end;
	return (*head);
}
