#include main.h
/**
 * main - Prints letter in small case and then new line
 * 
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    int char;

    for ( char = 'a'; char <= 'z'; char++ )
    {
        _putchar(char);
    }
return (0);
}