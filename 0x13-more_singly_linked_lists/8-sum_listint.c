#include "lists.h"

/**
 * sum_listint - Compute the sum of all the data(n) of a linked list;
 * @head: Head to linked list
 * Return: Sum of the data, else 0;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}

	return (0);
}

