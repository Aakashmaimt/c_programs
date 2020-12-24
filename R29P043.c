//Program to print fibbonacci series upto any entered number
//Author Aakash  Date 05 Dec 2020
#include<stdio.h>

int main()
{
    int number,a=0,b=1,c=1;
    printf("Enter any number :");
    scanf("%d",&number);

    printf("0 1");
    while(c<=number)
    {
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}