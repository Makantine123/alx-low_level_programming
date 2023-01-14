#include "lists.h"
/**
 * sum_dlistint - Function returns the sum of all data (n) of list
 * @head: list head
 *
 * Return: 0 if list is empty, else sum of all data (n)
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    int sum = 0;

    if (!current)
    {
        return (0);
    }
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }
    return (sum);
}
