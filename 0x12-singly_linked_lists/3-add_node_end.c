#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list
 * @head: List head pointer
 * @str: String
 * Return: Address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (*head);
}
