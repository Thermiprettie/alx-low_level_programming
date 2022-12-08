#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head:
 * @index: node index, starting from 0
 * Return: nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
