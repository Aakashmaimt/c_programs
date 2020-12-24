//Program to calculate the sum of first and last of four digit number
//Author Aakash  Date October 21,2020
#include<stdio.h>

int main()
{
    int number,d1,d2,d3,d4,temp,sum;
    printf("Enter four digit number :");
    scanf("%d",&number);

    temp=number;
    d1=temp%10;
    temp=temp/10;
    d2=temp%10;
    temp=temp/10;
    d3=temp%10;
    temp=temp/10;
    d4=temp%10;
    temp=temp/10;

    sum=d1+d4;
    printf("The sum of first and last digit of the %d is %d",number,sum);

    return 0;
}