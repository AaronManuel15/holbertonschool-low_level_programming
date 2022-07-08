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

	while (head)
	{
		ptrHolder = head;
		head = head->next;
		free(ptrHolder->str);
		free(ptrHolder);
	}
	free(ptrHolder);
}
