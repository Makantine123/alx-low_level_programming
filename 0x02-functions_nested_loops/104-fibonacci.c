#include "stdio.h"
/**
 * main - Prints the sum of all even held numbers in fibonacci series
 * Return: Always 0 (Success)
 */
int main(void)
{
        unsigned long numTotal;
        int firstN;
        int SecondN;
        int i;
        unsigned long j;

        numTotal = 0;
        firstN = 1;
        SecondN = 2;
        i = 3;

        printf("%d, ", firstN);
        printf("%d ,", SecondN);

        while (i <= 98)
        {
                numTotal = firstN + SecondN;
                j = numTotal;
                while (j != 0)
                {
                        j = j % 10;
                        printf("%lu", j);
                        j = j / 10;
                }

                if (i < 98)
                {
                        printf(", ");
                }
                firstN = SecondN;
                SecondN = numTotal;
                i++;
        }
        return (0);
}
