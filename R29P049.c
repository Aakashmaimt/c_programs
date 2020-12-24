//Program to print pattern of star
//Author Aakash  Date 05 Dec 2020
#include<stdio.h>

int main()
{
    int rows,i,j,k,n;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for (i = rows; i >= 1; i--)
    {
        for(j=0;j<rows-i;j++){
            printf("  ");
        }
        
        for(k=0;k<(2*i)-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}