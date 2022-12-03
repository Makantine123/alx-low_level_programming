#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
        unsigned int i;

        va_start(par, n);

        for (i = 1; i <= n; i++)
        {
		if (va_arg(par, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
                	printf("%s", va_arg(par, char *));
		}

                if ((i <= n - 1) && (separator != NULL))
                {
                        printf("%s", separator);
                }
        }
        printf("\n");
}

