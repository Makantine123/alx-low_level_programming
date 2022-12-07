#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at  give position
 * @head:List pointer
 * @idx:List index to insert new node
 * @n:Interger
 * Return: Address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));

	if (!head || !new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx < 1 || idx > count + 1)
	{
		return (NULL);
	}
	else
	{
		while (idx--)
		{
			if (idx == 0)
			{
				temp->next = (*head);
				(*head) = temp;
			}
			else
			{
				head = &(*head)->next;
			}
		}
		count++;
	}
	return (new);
}
