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
        unsigned long N;
        int j;

        numTotal = 0;
        firstN = 1;
        SecondN = 2;
        i = 3;

        printf("%d, ", firstN);
        printf("%d ,", SecondN);

        while (i <= 98)
        {
                numTotal = firstN + SecondN;
                N = numTotal;
                while (j != 0)
                {
                        j = N % 10;
                        printf("%d", j);
                        N = N / 10;
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
