//Program to print the combinations of 1 , 2  and 3
//Author Aakash  Date 30 Nov 2020
#include<stdio.h>

int main()
{
    int i,j,k;
    for (i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            for ( k = 1; k <= 3; k++)
            {
                printf("%d %d %d\n",i,j,k);
            }  
        }
    }

    return 0;
}