#include "main.h"
/**
 * swap_int - Functions swaps the value of 2 intergers
 * @a: Integer a
 * @b: Integer b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
