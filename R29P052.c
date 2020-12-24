//Program to print pattern of numbers
//Author Aakash  Date 18 Dec 2020
#include <stdio.h>

int main()
{
    int rows, i, j, k, x, n;
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < rows - i; j++)
        {
            printf("  ");
        }

        n = i;

        for (j = 0; j < i; j++)
        {
            printf("%d ", n);
            n++;
        }
        n = n - 2;
        for (k = n; k >= i; k--)
        {
            printf("%d ", n);
            n--;
        }

        printf("\n");
    }
    return 0;
}

/*

      1
    2 3 2
  3 4 5 4 3
 4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 


*/