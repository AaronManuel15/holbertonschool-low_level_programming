#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: pointer to head of list
 * @str: string to be duplicated
 * Return: address of new element upon success. NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptrCopy;

	ptrCopy = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		while (ptrCopy->next)
			ptrCopy = ptrCopy->next;

		ptrCopy->next = new;
	}
	return (new);
}
