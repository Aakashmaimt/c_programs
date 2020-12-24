//Program to print the pattern of stars
//Author Aakash  Date 18 Dec 2020
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
        for ( k = 0; k < (2*i)-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    x = 1;
    for (i = rows - 1; i > 0; i--)
    {
        for (k = 0; k < x; k++)
        {
            printf(" ");
        }

        for (j = 0; j < (2 * i) - 1; j++)
        {
            printf("*");
        }
        x++;
        printf("\n");
    }

    return 0;
}

/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/