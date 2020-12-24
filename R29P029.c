//Program to reverse a number through while loop
//Author Aakash  Date 22 NOV 2020
#include <stdio.h>

int main()
{
    int number, reverse = 0, digit, temp;
    printf("Enter any number to reverse :");
    scanf("%d", &number);

    temp = number;
    
    while (temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    printf("The reverse of %d is %d", number, reverse);

    return 0;
}