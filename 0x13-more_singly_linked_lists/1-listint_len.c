#include "lists.h"

/**
 * listint_len - Function that returns the number of elememnsts in linked list
 * @h: List
 * Return: Number of elemets
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
