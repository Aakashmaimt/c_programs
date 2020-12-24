//Program to print the staircase of numbers
//Author Aakash Date 06 Dec 2020
#include<stdio.h>

int main()
{
    int rows,i,j;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        if (i % 2 == 0)             //It will print the rows which are at even position
        {
            for (j = i; j > 0; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    
    return 0;
}