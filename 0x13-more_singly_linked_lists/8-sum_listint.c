#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of a linked list
 * @head: pointer
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *lst;
	int sum = 0;

	lst = malloc(sizeof(listint_t));
	lst = head;
	while (lst != NULL)
	{
		sum += lst->n;
		lst = lst->next;
	}
	return (sum);
}
