#include "lists.h"

/**
 * list_len - Function that returns the number of elementsin a linked list_t
 * @h: linked list h
 * Return: Number of elements in lists
 */
size_t list_len(const list_t *h)
{
	int i, count;

	count = 0;

	if(h)
	{
		for (i = 0; h; i++)
		{
			if (h->str != NULL)
			{
				count = count + 1;
			}
			h = h->next;
			i++;
		}
	}
	return (count);
}
