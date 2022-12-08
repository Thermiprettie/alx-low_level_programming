#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a linked list
 * @head: head of node
 * @index: index of node
 * Return: 1 if successful, or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nom = 0;
	dlistint_t *node1 = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	node1 = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node1);
		return (1);
	}
	while (node1->next != NULL)
	{
		if (nom == index)
		{
			node1->next->prev = node1->prev;
			node1->prev->next = node1->next;
			free(node1);
			return (1);
		}
		node1 = node1->next;
		nom++;
	}

	return (-1);
}
