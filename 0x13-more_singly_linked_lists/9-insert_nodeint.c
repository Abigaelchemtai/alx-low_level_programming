#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts new node at given position
 * @head: An pointer to the first node in the list
 * @idx: index positionwhere the new node is added
 * @n: new node to be inserted
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *latest;
	listint_t *value = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest || !head)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
		return (latest);
	}

	for (k = 0; value && k < idx; k++)
	{
		if (k == idx - 1)
		{
			latest->next = value->next;
			value->next = latest;
			return (latest);
			}
		else
			value = value->next;
	}

	return (NULL);
}
