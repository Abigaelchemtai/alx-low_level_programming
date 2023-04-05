#include "lists.h"
/**
 * find_listint_loop -A function that finds the loop in a linked list
 * @head:A pointer linked list to search for.
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *var1 = head;
	listint_t *var2 = head;

	if (!head)
		return (NULL);

	while (var1 && var2 && var2->next)
	{
		var2 = var2->next->next;
		var1 = var1->next;
		if (var2 == var1)
		{
			var1 = head;
			while (var1 != var2)
			{
				var1 = var1->next;
				var2 = var2->next;
			}
			return (var2);
		}
	}
	return (NULL);
}
