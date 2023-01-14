#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the begging of a dlistint_t
 * @head: list head
 * @n: data
 *
 * Return: The address of the new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (!head)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head)
(*head)->prev = new_node;
(*head) = new_node;
return (new_node)
}
