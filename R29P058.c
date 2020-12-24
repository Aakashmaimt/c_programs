//Program to print pattern of numbers 
//Author Aakash  Date 20 Dec 2020
#include<stdio.h>

int main()
{
    int rows , i , j , k , x ;
    printf("Enter the number of rows :");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 0; j < rows-i; j++)
        {
            printf(" ");
        }
        
        x=1;
        while(x<=i)
        {
            printf("%d",x);
            x++;
        }
        x=i-1;
        while(x!=0)
        {
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    for ( i = rows-1; i > 0; i--)
    {
        for ( k = 0; k < rows-i; k++)
        {
            printf(" ");
        }
        x=1;
        while(x<=i)
        {
            printf("%d",x);
            x++;
        }
        x=i-1;;
        while(x!=0)
        {
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    
    return 0;
}

/*

    1
   121
  12321
 1234321
  12321
   121
    1

*/