//Program to calculate the sum of digits of a number with the help of functions
//Author Aakash  Date 22 Dec 2020
#include<stdio.h>

int sum_of_digits(int);

int main()
{
    int number , answer;
    printf("Enter the number :");
    scanf("%d",&number);

    answer=sum_of_digits(number);
    printf("Sum is %d",answer);

    return 0;
}

int sum_of_digits(int num)
{
    int result,sum=0,digit;
    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        sum=sum+digit;
    }
    return sum;
}