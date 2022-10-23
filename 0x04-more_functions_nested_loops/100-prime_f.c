#include<stdio.h>  
  
int main(void)  
{  
    int count;
    int num;

    num = 1231952;
  
    printf("\nPrime Factors of %d are ..\n", num);  
    for(count = 2; num > 1; count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d ", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}  
