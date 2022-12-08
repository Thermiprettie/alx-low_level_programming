#include "lists.h"

/**
 * sum_dlistint - sum all data of a linked list
 * @head: pointer to head
 * Return: the sum of all the data (n) of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum_data = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
