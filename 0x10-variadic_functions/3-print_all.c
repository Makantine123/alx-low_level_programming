#include "variadic_functions.h"
/**
 * print_all - Functions that prints anything
 * @format: List of types of arguments passed to the function
 * Description: If the string is NULL, print (nil), else print
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list par;
	int i;
	char *str;

	i = 0;

	if (format)
	{
		va_start(par, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(par, int));
					break;
				case 'i':
					printf("%d", va_arg(par, int));
					break;
				case 'f':
					printf("%f", va_arg(par, double));
					break;
				case 's':
					str = va_arg(par, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0')
			{
				printf(", ");
			}
			i++;
		}
		va_end(par);
	}
	printf("\n");
}
