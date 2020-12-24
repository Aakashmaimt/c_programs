//Program to check whether a number is palindrome or not
//Author Aakash  Date 22 NOV 2020
#include <stdio.h>

int main()
{
    int number, reverse = 0, digit , temp;
    printf("Enter any number to check palindrome :");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }
    
    if(number==reverse)
    {
        printf("Number is palindrome.");
    }
    else
    {
        printf("Entered number is not palindrome.");
    }
    
    return 0;
}