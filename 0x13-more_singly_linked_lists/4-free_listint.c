#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *lnk, *next;

	lnk = head;

	while (lnk != NULL)
	{
		next = lnk->next;
		free(lnk);
		lnk = next;
	}
}
