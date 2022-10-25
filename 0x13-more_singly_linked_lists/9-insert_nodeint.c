#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the list
 * @idx: index of the list for the new node starting at 0
 * @n: new node
 * Return: address of the new node, NUll if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lst;
	listint_t *new_node;
	unsigned int node = 0;
	unsigned int sta8 = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	lst = *head;

	while (lst != NULL)
	{
		node++;
		lst = lst->next;
	}

	if (node < idx)
	{
		free(new_node);
		return (NULL);
	}
	lst = *head;
	if (sta8 == idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	while (sta8 < idx - 1)
	{
		lst = lst->next;
		sta8++;
	}

	new_node->next = lst->next;
	lst->next = new_node;
	return (new_node);
}
