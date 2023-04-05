#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes a node at certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *value = *head;
	listint_t *latest = NULL;
	unsigned int h = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(value);
		return (1);
	}

	while (h < index - 1)
	{
		if (!value || !(value->next))
			return (-1);
		value = value->next;
		h++;
	}
	latest = value->next;
	value->next = latest->next;
	free(latest);
	return (1);
}
