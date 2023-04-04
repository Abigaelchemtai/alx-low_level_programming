#include "lists.h"
/**
 * add_nodeint -a function that adds a new node at the beginning of a linklist.
 * @head: A pointer to tyhe head of linked lists.
 * @n:Node to be inserted
 * Return: The addressof the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *element;

	element = malloc(sizeof(listint_t));
	if (element == NULL)
		return (NULL);
	element->n = n;
	element->next = *head;
	*head = element;
	return (element);
}
