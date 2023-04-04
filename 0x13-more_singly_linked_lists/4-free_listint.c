#include "lists.h"
/**
 * free_listint - A function that frees a linked list
 * @head:pointer to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *value;

	while (head)
	{
		value = head->next;
		free(head);
		head = value;
	}
}
