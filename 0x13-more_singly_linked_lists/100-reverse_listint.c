#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer
 * Return: reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead;
	listint_t *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	ahead = *head;
	*head = ahead->next;
	behind = (*head)->next;

	ahead->next = NULL;

	while (behind != NULL)
	{
		(*head)->next = ahead;
		ahead = *head;
		*head = behind;
		behind = behind->next;
	}
	(*head)->next = ahead;
	return (*head);
}
