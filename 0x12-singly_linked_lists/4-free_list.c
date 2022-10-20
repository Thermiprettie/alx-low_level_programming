#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: first node
 * Return: void
 */
void free_list(list_t *head);
{
	list_t *drop;

	while ((drop = head) != NULL)
	{
		head = head->next;
		free(drop->str);
		free(drop);
	}
}
