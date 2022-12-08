#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer head
 * Return: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node1 = NULL;

	while (head != NULL)
	{
		node1 = head->next;
		free(head);
		head = node1;
	}
}
