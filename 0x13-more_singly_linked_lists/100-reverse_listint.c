#include "lists.h"

/**
 * reverse_listint - ep
 * @head: head pointer
 *
 * Return: pointer.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *e;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	e = NULL;
	while ((*head)->next != NULL)
	{
		h = (*head)->next;
		(*head)->next = e;
		e = *head;
		*head = h;
	}
	(*head)->next = e;
	return (*head);
}
