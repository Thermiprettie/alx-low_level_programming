#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 * @h: parameter
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodess = 0;

	while (h != 0)
	{
		h = h->next;
		nodess++;
	}
	return (nodess);
}
