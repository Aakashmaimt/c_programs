//Program to print the pattern
//Author Aakash  Date 17 Dec 2020
#include <stdio.h>

int main()
{
    int rows, i, j, k, c = 0, x;
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        x = 1;
        while (x <= i)
        {
            printf("%d ", x);
            x++;
        }
        while(x!=2)
        {
            printf("%d ",x-2);
            x--;
        }
        printf("\n");
    }
    return 0;
}

/*

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/