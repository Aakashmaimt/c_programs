//Program to calculate factorial of a number with the help of function
//Author Aakash  Date 21 Dec 2020
#include<stdio.h>

int fact(int);

int main()
{
    int number,factorial;
    printf("Enter any number :");
    scanf("%d",&number);

    factorial=fact(number);
    printf("Factorial is %d",factorial);
    return 0;
}

int fact(int a)
{
    int i,b=1;
    for ( i = 1; i <= a; i++)
    {
        b=b*i;
    }
    return b;
}