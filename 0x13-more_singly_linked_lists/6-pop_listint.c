#include "lists.h"

/**
 * pop - listint - Function that deletes the head node of a list
 * and returns the head nodes data(n)
 * @head: List head
 * Return: 0 if list is empty, nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeData;

	if (!head)
	{
		return (0);
	}

	nodeData = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nodeData);
}
