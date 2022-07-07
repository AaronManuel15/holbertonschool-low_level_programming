#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: pointer to head of list
 * @str: string to be duplicated
 * Return: address of new element upon success. NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
	return (*head);
}
