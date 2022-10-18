#include <stdio.h>
#include <main.h>
/**
 * main - Prints letter in small case and then new line
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    void print_alphabet(void)
    {
        int char;

        for ( char = 'a'; char <= 'z'; char++ )
        {
            printf("%d",char);
        }
    }
    return (0);
}