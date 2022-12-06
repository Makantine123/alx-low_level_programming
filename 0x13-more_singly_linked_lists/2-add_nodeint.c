#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the begging of a list
 * @head: List head
 * @n: Element
 * Return: Address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	unsigned int len = 0;

	new malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
