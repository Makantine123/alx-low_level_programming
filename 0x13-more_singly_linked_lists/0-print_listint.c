#include "lists.h"

/**
 * print_listint - Function prints all the lements of a list
 * @h: List
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
