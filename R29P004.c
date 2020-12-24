//Program to convert fahrenheit into celsius
//Author  Aakash  Date October 13,2020

#include<stdio.h>

int main()
{
    float fahrenheit,celsius;
    printf("Enter temperature into fahrenheit :");
    scanf("%f",&fahrenheit);

    celsius =  (fahrenheit - 32) *5/9;
    printf("The temperature in celsius is %f",celsius);
    return 0;
}