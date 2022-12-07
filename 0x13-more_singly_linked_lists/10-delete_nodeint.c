#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes the node at index of list
 * @head: Head of list
 * @index: Index in list
 * Return: 1 if Success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	for (ptr = *head; index && ptr->next != NULL; index--, ptr = ptr->next)
		prev = ptr;
	if (index)
		return (-1);

	prev->next = prev->next->next;
	free(ptr);
	return (1);
}
