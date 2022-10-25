#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to function
 * @index: index
 * Return: 1 if successful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node = 0;

	listint_t *idx, *idx1;

	idx = *head;
	idx1 = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(idx1);
		return (1);
	}

	while (node != index)
	{
		if (node == index - 1)
		{
			idx = idx1;
		}
		idx1 = idx1->next;

		if (idx1 == NULL)
		{
			return (-1);
		}
		node++;
	}
	idx->next = idx1->next;
	free(idx1);
	return (1);
}

