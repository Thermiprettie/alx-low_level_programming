#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of node
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nom = 0;

	while (h != NULL)
	{
		h = h->next;
		nom++;
	}

	return (nom);
}
