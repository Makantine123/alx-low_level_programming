#include "lists.h"
/**
 * delete_dnodeint_at_index - Function deletes the nodes at index of list
 * @head: List head
 * @index: List index
 *
 * Return: 1 if succeeded , -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    if (*head == NULL || n <= 0)
    {
        return (-1);
    }

    for (i = 1; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    if *head == NULL || (current == NULL)
    {
        return (-1);
    }

    if (*head == current)
    {
        *head = current->next;
    }

    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }

    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }

    free(current);
}
