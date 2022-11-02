#include "main.h"
/**
 * Function returns the value of x raised to the power of y
 * @x: Integer Value x
 * @y: Integer Power y
 * Return: -1 if y < 0 else x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1)
	{
		return (1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y-1));
	}
}
