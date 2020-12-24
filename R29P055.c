//Program to print fibbonacci number pattern
//Author Aakash  Date 15 Dec 2020
#include <stdio.h>

int main()
{
    int i, j, rows, a = 1, b = 1, c;
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
    {
        a=1;
        b=1;
        printf("%d %d", a, b);
        for (j = 0; j < i; j++)
        {
            c = a + b;
            printf(" %d",c);
            a = b;
            b = c;
        }
        printf("\n");
    }
    return 0;
}