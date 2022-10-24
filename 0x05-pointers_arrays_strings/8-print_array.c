#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of array of integers.
 * @a: Array
 * @n: Number of elemets in array
 * Return: Always void
 */
void print_array(int a*, int n)
{
	int i;
	int x;

	for ( i = 0; i < n; i++)
	{
		x = *(a + i);
		printf("%d", x);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
}
