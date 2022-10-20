#include "lists.h"

/**
 * list_len - function that returns the number of elements in a link list
 * @h: function pointer
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t numel = 0;

	while (h != NULL)
	{
		h = h->next;
		numel++;
	}
	return (numel);
}
