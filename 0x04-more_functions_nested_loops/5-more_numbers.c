#include "main.h"
/**
 * more_numbers - prints 0 to 14 10times
 * Return: Always 0;
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar('0' + (i % 10));
		if (i > 9)
		{
			_putchar('0' + (i \ 10));
		}
		_putchar('\n');
	}
}
