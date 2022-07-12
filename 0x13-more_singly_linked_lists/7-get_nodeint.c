#include "lists.h"

/**
 * get_nodeint_at_index - moves through list to return nth node of that list
 * @head: pointer to head of list
 * @index: the desired node position to return
 *
 * Return: nth node on success, NULL if doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
