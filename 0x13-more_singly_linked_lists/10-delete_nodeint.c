#include "lists.h"
#include "6-pop_listint.c"

/**
 * delete_nodeint_at_index - deletes the node at the index position
 * @head: double pointer to head of list
 * @index: position of node to be deleted
 *
 * Return: 1 upon success, -1 upon failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int count = 0;

	temp1 = *head;
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	while (count <  index - 1)
	{
		if (!(temp1->next))
			return (-1);

		temp1 = temp1->next;
		count++;
	}

	temp2 = temp1->next;
	if (!(temp2->next))
		return (-1);

	temp1->next = temp2->next;
	free(temp2);

	return (1);
}
