#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @n: node
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node1 = NULL, *newnode = NULL;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;

	node1 = *head;
	*head = newnode;
	newnode->next = node1;

	if (node1 != NULL)
		node1->prev = *head;

	return (newnode);
}
