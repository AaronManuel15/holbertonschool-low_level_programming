#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to head of list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptrHolder;

	while (head)
	{
		ptrHolder = head;
		head = head->next;
		free(ptrHolder);
	}
	free(head);
}
