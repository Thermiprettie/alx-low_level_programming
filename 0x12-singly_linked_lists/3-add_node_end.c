#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node
 * @str: string
 * Return: addy of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupl;
	int len;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupl = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupl;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
