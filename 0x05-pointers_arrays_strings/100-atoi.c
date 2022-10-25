#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted to integer
 * Return: 0 if no iterger in string
 */
int _atoi(char *s)
{
	int sign;
	unsigned int number;
	int i;

	sign = 1;
	number =  0;
	i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i = 1;
	}

	while (s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			number = (number * 10) + s[i] - '0';
		}
		else
		{
			break;
		}
		i++;
	}
	number = number * sign;
	if (number != '\0')
	{
		return (number);
	}
	else
		return (0);
}

