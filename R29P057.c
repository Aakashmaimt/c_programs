//Program to print the pattern of numbers
//Author Aakash  Date 20 Dec 2020
#include <stdio.h>

int main()
{
    int rows, i, j, k, x;
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 0; j < rows-i; j++)
        {
            printf(" ");
        }

        x=i;
        while(x>0)
        {
            printf("%d",x);
            x--;
        }
        x=x+2;
        while(x<=i)
        {
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
    for (i = rows - 1; i > 0; i--)
    {
        for ( k = 0; k < rows-i; k++)
        {
            printf(" ");
        }
        
        x = i;
        while (x > 0)
        {
            printf("%d", x);
            x--;
        }
        x = x + 2;
        while (x <= i)
        {
            printf("%d", x);
            x++;
        }
        printf("\n");
    }

    return 0;
}

/*

    1
   212
  32123
 4321234
  32123
   212
    1

*/