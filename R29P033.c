//Program to print armstrong number between 1 and 500
//Author Aakash  Date 22 NOV 2020
#include <stdio.h>

int main()
{
    int digit = 0, temp, reminder, sum = 0, number;
    printf("Armstrong numbers between 1 and 500 are :- \n\n");
    for (number = 1; number <= 500; number++)
    {
        temp = number;
        digit=0;
        sum=0;
        while (temp != 0)
        {
            digit++;
            temp = temp / 10;
        }

        temp = number;

        if (digit == 1)
        {
            printf("%d  ", number);
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
                printf("%d  ", number);
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
                printf("%d  ", number);
            }
        }
    }
    return 0;
}