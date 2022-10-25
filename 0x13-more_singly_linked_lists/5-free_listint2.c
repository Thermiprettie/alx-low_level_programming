#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *lnklst;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		lnklst = (*head);
		*head = (*head)->next;
		free(lnklst);
	}
	head = NULL;
}
