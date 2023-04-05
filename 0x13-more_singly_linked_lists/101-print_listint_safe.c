#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A function that Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t.
 * Return: If the list is not looped - 0.
 * else the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *value, *power;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	value = head->next;
	power = (head->next)->next;

	while (power)
	{
		if (value == power)
		{
			value = head;
			while (value != power)
			{
				nodes++;
				value = value->next;
				power = power->next;
			}

			value = value->next;
			while (value != power)
			{
				nodes++;
				value = value->next;
			}

			return (nodes);
		}

		value = value->next;
		power = (power->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - A function to  Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ref = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ref = 0; ref < nodes; ref++)
{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
