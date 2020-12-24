//Program to find the given number is prime or not
//Author Aakash  Date 25 Nov 2020
#include <stdio.h>

int main()
{
    int number, i;
    printf("Enter any number :");
    scanf("%d", &number);

    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            break;
        }
    }
    if (i > number/2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }

    return 0;
}