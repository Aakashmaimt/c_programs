//Program to print the staircase of numbers
//Author Aakash Date 06 Dec 2020
#include<stdio.h>

int main()
{
    int rows,i,j,k;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        if (i % 2 == 0)         
        {
            for ( k = 1; k <= i; k++)
            {
                if(k%2==0)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }  
            }            
        }
        else
        {
            for ( k = 1; k <= i; k++)
            {
                if(k%2==0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }  
            }
        }
        printf("\n");
    }
    
    return 0;
}


/*

 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1


*/