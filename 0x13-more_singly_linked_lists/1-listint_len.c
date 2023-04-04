#include "lists.h"
/**
 * listint_len - A function that returns the number of elements in linkedlist
 * @h: A pointer to the head of linked listint_t
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
