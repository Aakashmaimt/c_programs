//Program to print the pascal triangle
//Author Aakash  Date 15 Dec 2020 

#include <stdio.h>

int main()
{
    int rows, i, j, k, c;
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {

        for (k = 1; k <= rows - i; k++)
        {
            printf("  ");
        }

        c = 1;

        for (j = 1; j <= i; j++)
        {
            printf(" %d  ", c);
            c = c * (i - j) / j;
        }

        printf("\n");
    }
    return 0;
}