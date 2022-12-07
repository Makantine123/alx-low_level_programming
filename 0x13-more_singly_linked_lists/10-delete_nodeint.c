#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes the node at index of list
 * @head: Head of list
 * @index: Index in list
 * Return: 1 if Success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int count = 0;

	if (!head || !*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}

