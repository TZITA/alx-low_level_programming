#include "lists.h"

/**
 * get_nodeint_at_index - e p
 * @head: struct
 * @index: int
 *
 * Return: Nth Node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n_node = head;
	int cnt = 0;

	if (head == NULL)
	{
		return ();
	}

	while (n_node != NULL)
	{
		if (cnt == index)
		{
			return (n_node->n);
		}
		cnt++;
		n_node = n_node->n;
	}
	return (0);
}
