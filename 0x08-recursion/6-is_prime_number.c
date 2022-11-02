#include "main.h"
/**
 * check_prime - Checks if a number is a prime number
 * @n: Number to check
 * @i: Interation starts
 * Return: 1 if n is prime, else 0;
 */
int check_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
/**
 * is_prime_number - Determines if number is prime number
 * @n: Number
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	check_prime(n, 2);
}
