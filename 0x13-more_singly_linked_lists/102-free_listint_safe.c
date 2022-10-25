#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer address
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t siz_e = 0;
	listint_t *lst, *tmp;
	long st8;

	if (!h)
		return (0);
	lst = *h;
	*h = NULL;
	while (lst)
	{
		siz_e++;
		st8 = lst->next - lst;
		tmp = lst;
		free(tmp);
		if (st8 >= 0)
			break;
		lst = lst->next;
	}
	return (siz_e);
}
