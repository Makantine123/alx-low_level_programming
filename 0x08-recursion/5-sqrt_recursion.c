#include "main.h"
/**
 * sqrt_check - Finds the squar root of a number
 * @n: Number to find sqrt
 * @i: Natural number to start checking
 * Return: -1 if not found else sqrt
 */
int sqrt_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_check(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Functions returns the natural square root of a number
 * @n: Number
 * Return: 1 if n does not have a nutural square root else natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(n, 0));
	}
}
