//Program to calculate number of digits using recursion
//Author Aakash  Date 22 Dec 2020
#include<stdio.h>

int digit_calculator(int);

int main()
{
    int number,digits;
    printf("Enter any number :");
    scanf("%d",&number);

    digits=digit_calculator(number);
    printf("Number of digits is %d",digits);

    return 0;
}

int digit_calculator(int number)
{
    static int digits=0;

    if(number>0)
    {
        digits++;
        digit_calculator(number/10);
    }
    else
    {
        return digits;
        
    }
}