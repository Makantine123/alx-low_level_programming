#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase and 0 if not
 * Return: Always 0 (Success)
 * @c: Is the character to test
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
