#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by new line
 * @separator: String to be printed with number
 * @n: Numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;

	va_start(par, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(par, int));

		if ((i < n -1) && (separator != NULL))
		{
			printf("%s", separator);
		}
		else if (i < n -1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
