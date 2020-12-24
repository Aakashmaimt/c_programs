//Program to print the pattern of numbers
//Author Aakash  Date 05 Dec 2020
#include<stdio.h>

int main()
{
    int rows,i,j,k,n=1;
    printf("Enter how amny rows you want to print :");
    scanf("%d",&rows);

    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < rows-i; j++)
        {
            printf("  ");
        }
        for ( k = 0; k < i+1; k++)
        {
            printf("%d   ",n);
            n++;
        }
        printf("\n");
    }
    
    return 0;
}