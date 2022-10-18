#include "main.h"
/**
 * _isalpha - Checks if c is a alphabet character
 * Return: Returns 1 if alphabet or 0 is not
 * @c: Is the character to test
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
