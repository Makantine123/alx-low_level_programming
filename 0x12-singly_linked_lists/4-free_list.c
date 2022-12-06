#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: List head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *end = head;
	list_t *prev = NULL;

	while (end->next)
	{
		prev = end;
		end = end->next;
		free(end->str);
		free(end);
	}
	prev->next = NULL;
}
