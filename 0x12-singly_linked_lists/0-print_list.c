#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list
 * @h:Ponter to a list h
 * Return:Number of nodes, (nil) if str is NULL
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h)
	{
		for (i = 0; h; i++)
		{
		if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%u] %s\n", h->len, h->str);
			}
			h = h->next;
		}
		return (i);
	}
	else
	{
		return (0);
	}
}
