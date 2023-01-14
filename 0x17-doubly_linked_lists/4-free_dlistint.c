#include "lists.h"
/**
 * free_dlistint - Function frees a dlistint_t
 * @head: List head
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current, *next;

current = head;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

head = NULL;
}
