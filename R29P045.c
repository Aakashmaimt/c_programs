//Program to print the table of user's entered number
//Author Aakash  Date 30 Nov 2020
#include<stdio.h>

int main()
{
    int number,i;
    printf("Enter any number :");
    scanf("%d",&number);

    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",number,i,number*i);
    }

    return 0;
}