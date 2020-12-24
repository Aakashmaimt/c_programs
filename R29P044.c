//Program to print first n numbers of fibbonacci series
//Author Aakash  Date 05 Dec 2020
#include<stdio.h>

int main()
{
    int number=0,a=0,b=1,c=a+b,i=0;
    printf("Enter how many numbers you want to print :");
    scanf("%d",&number);

    printf("0 1");
    while(i<number-2)
    {
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    return 0;
}