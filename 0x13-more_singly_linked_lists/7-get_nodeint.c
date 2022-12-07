#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: head of list
 * @index: Node index
 * Return: Data of node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
			{
				return (head);
			}
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
