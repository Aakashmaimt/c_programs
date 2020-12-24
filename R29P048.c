//Program to print star pattern
//Author Aakash  Date 05 Dec 2020
#include<stdio.h>

int main()
{
    int rows,i,j,k;
    printf("Enter how many rows you want to print :");
    scanf("%d",&rows);

    for (i = 1; i < rows+1; i++)
    {
        for (j = 0; j < rows-i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < (2*i)-1; k++)
        {
            printf("* ");
        }
        printf("\n");        
    }

    return 0;
}