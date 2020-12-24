//Program to print the pattern of alphabets
//Author Aakash  date 22 Dec 2020
#include <stdio.h>

int main()
{
    int rows, i, j, k, x;
    char ch;
    
    printf("Enter the number of rows :");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < rows - i; j++)
        {
            printf(" ");
        }

        ch = 65;
        x = 1;
        while (x <= i)
        {
            printf("%c", ch);
            ch++;
            x++;
        }
        ch = ch - 2;
        x--;
        while (x > 1)
        {
            printf("%c", ch);
            ch--;
            x--;
        }
        printf("\n");
    }
    for (i = rows - 1; i > 0; i--)
    {
        for (j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        ch = 65;
        x = 1;
        while (x <= i)
        {
            printf("%c", ch);
            ch++;
            x++;
        }
        ch = ch - 2;
        x--;
        while (x > 1)
        {
            printf("%c", ch);
            ch--;
            x--;
        }
        printf("\n");
    }
    return 0;
}