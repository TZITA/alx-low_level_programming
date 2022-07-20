#include "lists.h"

/**
 * pop_listint - e b
 * @head: struct
 *
 * Return: Int.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	
	*head = tmp->next;
	free(tmp);
	tmp = NULL;

	return (tmp->n);
}

