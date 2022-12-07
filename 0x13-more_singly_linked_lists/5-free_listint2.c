#include "lists.h"

/**
 * free_listint2 - Function that frees a list, sets head to NULL
 * @head: Pointer to pointer list head 
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
