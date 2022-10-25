#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *st8, *tad;

	if (head == NULL)
		return (NULL);
	for (tad = head->next; tad != NULL; tad = tad->next)
	{
		if (tad == tad->next)
			return (tad);
		for (st8 = head; st8 != tad; st8 = st8->next)
			if (st8 == tad->next)
				return (tad->next);
	}

	return (NULL);
}
