#include "lists.h"
/**
 * get_dnodeint_at_index - Function returns the nth node of a list
 * @head: Doubly linked list head
 * @index: List index
 *
 * Return: Nth node of a list, else NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
{
return (current->n);
}
count++;
curent = current->next;
}
return (NULL);
}
