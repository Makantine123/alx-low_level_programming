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
	char *str;

	va_start(par, n);

        for (i = 1; i <= n; i++)
        {
		str = va_arg(par, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
               		printf("%s", str);
		}

                if ((i <= n - 1) && (separator != NULL))
                {
                        printf("%s", separator);
                }
        }
        printf("\n");
	va_end(par);
}

