//Program to print n numbers of prime
//Author Aakash  Date 30 Nov 2020
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, j;
    printf("How many prime numbers you want to print :");
    scanf("%d", &number);

    for (i = 2; i <= 500; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > i / 2)
        {
            if (number)
            {
                printf("%d  ", i);
                number--;
            }
            else
            {
                exit (0);
            }
            
        }
    }

    return 0;
}