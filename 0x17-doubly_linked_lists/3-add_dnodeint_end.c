#include "lists.h"

/**
 * add_dnodeint_end
 * @head: node pointer
 * @n: node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node1, *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	node1 = *head;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		return (newnode);
	}

	while (node1->next != NULL)
	{
		node1 = node1->next;
	}

	node1->next = newnode;
	newnode->prev = node1;

	return (newnode);
}
