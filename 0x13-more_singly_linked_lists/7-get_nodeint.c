#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer
 * @index: index of the node, starting at 0
 * Return: nth node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *dup;
	unsigned int count = 0;

	dup = head;

	while (dup != NULL)
	{
		node++;
		dup = dup->next;
	}
	dup = head;
	if (index > nodes - 1)
		return (NULL);

	while (count != index)
	{
		count++;
		dup = dup->next;
	}
	return (dup);
}
