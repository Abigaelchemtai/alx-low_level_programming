#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a linklist.
 * @head:A pointer to the first element in the list.
 * @n:data to be inserted
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *first = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}
	while (first->next)
		first = first->next;
	first->next = latest;
	return (latest);
}
