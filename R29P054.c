//Program to print pattern of star and numbers combination as well
//Author Aakash  Date 05 Dec 2020
#include<stdio.h>

int main()
{
    int rows,i,j,k,x;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for ( i = 0; i < rows; i++)
    {
        x=1;
        for ( j = 0; j < rows-i-1; j++)
        {
            printf("* ");
        }
        for ( k = 0; k <= i; k++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    
    return 0;
}