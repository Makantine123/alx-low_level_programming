#include "variadic_functions.h"
/*
 * sum_them_all - Sums all of its parameters
 * @n: Parameters
 *
 * Return: Sum of the parameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	int sum;

	va_start(par, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}

	va_end(par);
	return (sum);
}
