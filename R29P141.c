//Program to swap two numbers without using third variable
//Author Aakash  Date 18 Dec 2020
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After calculation :- \n First number is %d  and second number is %d",a,b);

    return 0;
}