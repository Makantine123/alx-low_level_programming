#include "main.h"
/**
 * more_numbers - prints 0 to 14 10times
 * Return: Always 0;
 */
void more_numbers(void)
{
	int i,j;

	for (j = 0; j < 11; j++)
	{

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{	
				_putchar('1')
			}
			_putchar(i % 10 + '0'
		}
		_putchar('\n');
	}
}
