//Program to print the pattern
//Author Aakash  Date 30 Nov 2020
#include <stdio.h>

int main()
{
    int rows, i, j;
    printf("Enter how many rows you want to print :");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}