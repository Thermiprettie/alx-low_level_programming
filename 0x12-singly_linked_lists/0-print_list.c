#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: function to a pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodess;
	const list_t *current = h;

	nodess = 0;

	while (current != NULL)
	{
		printf("[%d] %s\n", 0, current->len,
			       current-> != NULL ? current-> : "(nil)");
		current = current->next;
		nodess++;
	}
	return (nodess);
}
