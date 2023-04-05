#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the data in linkedlist.
 * @head:A pointer to the head of linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *value = head;

	while (value)
	{
		sum += value->n;
		value = value->next;
	}

	return (sum);
}
