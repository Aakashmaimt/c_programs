//Program to print all prime number between 1 to 300
//Author Aakash  Date 24 Nov 2020
#include <stdio.h>

int main()
{
    int j,i;
    printf("All prime numbers between 1 and 300 are :-\n");

    for (i = 2; i <= 300; i++)
    {
        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > i/2)
        {
            printf("%d  ", i);
        }
        
    }
    return 0;
}