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
	unsigned int cnt;

	for (cnt = 0; cnt < index; cnt++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (head);
}
