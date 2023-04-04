#include "lists.h"
/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: A pointer which points to the linkedlist at the head.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	do {
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	} while (h);

	return (nodes);
}
