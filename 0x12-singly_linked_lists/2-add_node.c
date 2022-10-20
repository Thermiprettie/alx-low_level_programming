#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: string to store
 * Return: head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchara;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchara = 0; str[nchara]; nchara++);

	new->len = nchara;
	new->next = *head;
	*head = new;

	return (*head);
}
