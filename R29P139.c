//Program to add two numbers without using addition operator
//Author Aakash  Date 21 Dec 2020
#include<stdio.h>

int main()
{
    int num1,num2,carry;
    printf("Enter number 1 :");
    scanf("%d",&num1);
    printf("Enter number 2 :");
    scanf("%d",&num2);

    while (num2 != 0)
    {
        carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
    printf("Sum is %d",num1);

    return 0;
}