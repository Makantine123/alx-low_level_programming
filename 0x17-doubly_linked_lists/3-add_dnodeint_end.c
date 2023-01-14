#include "lists.h"
/**
 * add_dnodeint_end - Function adds a new node at the end of a dlist
 * @head: dlistint_t head
 * @n: data
 *
 * Return - The address of the new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *last_node;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t)); 
    if (!new_node)
        return (NULL);
    else
    {
        last_node = *head;
        new_node->n = n;
        new_node->next = NULL;
    }
        if (*head == NULL)
            new_node->prev = NULL;
            *head = new_node;
            return (new_node);

        while (last_node->next != NULL)
            last_node = last_node->next;

        last_node->next = new_node;
        new_node->prev = last_node;
        return (new_node);
}
