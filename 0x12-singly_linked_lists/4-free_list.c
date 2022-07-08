#include "lists.h"

/**
 * free_list - frees list_t
 * @head: pointer to head of list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptrHolder;

	while (head->next)
	{
		ptrHolder = head->next;
		free(head->str);
		free(head);
		head = ptrHolder;
	}
	free(head->str);
	free(head);
}
