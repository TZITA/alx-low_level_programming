# include "lists.h"

/**
 * add_dnodeint - e p
 * @head: head
 * @n: data
 *
 * Return: Address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
