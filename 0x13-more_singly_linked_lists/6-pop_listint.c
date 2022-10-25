#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *nheadnode;
	int data_node;

	if (*head == NULL)
	{
		return (0);
	}
	else

		data_node = (*head)->n;
	nheadnode = (*head)->next;
	free(*head);

	*head = nheadnode;

	return (data_node);
}
