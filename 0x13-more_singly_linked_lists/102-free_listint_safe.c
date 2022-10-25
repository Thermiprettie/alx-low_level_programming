#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer address
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *lst, *tmp;
	long st8;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		size++;
		st8 = lst->next - lst;
		tmp = head;
		free(tmp);
		if (st8 >= 0)
			break;
		lst = lst->next;
	}
	return (size);
}
