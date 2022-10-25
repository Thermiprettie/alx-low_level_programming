#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tad, *dek, *kola;
	unsigned int counts = 0, flag = 0;

	if (head == NULL)
		return (0);
	kola = tad = head;
	dek = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		counts++;

		if (flag == 0 && dek != NULL && dek->next != NULL && tad != NULL)
		{
			if (dek == tad)
			{
				flag = 1;
				tad = kola;
			}
			dek = dek->next->next;
		}
		if (flag == 1 && tad == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		tad = tad->next;
	}
	return (counts);
}
