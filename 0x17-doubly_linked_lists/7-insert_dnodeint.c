#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: list index
 * @n: node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nom = 1;
	dlistint_t *node1 = NULL, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);
	newnode->n = n;
	node1 = *h;
	if (idx == 0)
	{
		*h = newnode;
		newnode->next = node1;
		newnode->prev = NULL;
		node1->prev = newnode;
		return (newnode);
	}
	while (node1->next != NULL)
	{
		if (nom == idx)
		{
			newnode->prev = node1;
			newnode->next = node1->next;
			node1->next = newnode;
			newnode->next->prev = newnode;
		}
		node1 = node1->next;
		nom++;
	}
	if (nom == idx)
	{
		newnode->prev = node1;
		newnode->next = NULL;
		node1->next = newnode;
	}
	if (nom < idx)
	{
		free(newnode);
		return (NULL);
	}
	return (newnode);
}
