//Program to calculate that the entered number is armstrong or not
//Author Aakash  Date 22 Nov 2020
#include <stdio.h>

int main()
{
    int number, sum = 0, digit = 0, temp, reminder;
    printf("Enter the number :");
    scanf("%d", &number);

    temp = number;
    while (temp != 0)
    {
        digit++;
        temp = temp / 10;
    }

    temp = number;

    if (digit == 1)
    {
        printf("Armstrong number.");
    }
    else if (digit == 2)
    {
        while (temp != 0)
        {
            reminder = temp % 10;
            sum = sum + (reminder * reminder);
            temp /= 10;
        }
        if (number == sum)
        {
            printf("Armstrong number.");
        }
        else
        {
            printf("Not an armstrong number.");
        }
    }
    else if (digit == 3)
    {
        while (temp != 0)
        {
            reminder = temp % 10;
            sum = sum + (reminder * reminder * reminder);
            temp /= 10;
        }
        if (number == sum)
        {
            printf("Armstrong number.");
        }
        else
        {
            printf("Not an armstrong number.");
        }
    }

    return 0;
}