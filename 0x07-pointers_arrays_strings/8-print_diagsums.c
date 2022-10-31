#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function prints the sum of 2 diagonals of square matrix
 * @a: Pointer
 * @size:Size
 * Return: The sum of 2 diagonals
 */
void print_diagsums(int *a, int size)
{

	int i;
	int diag_sum1 = 0, diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		diag_sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}
