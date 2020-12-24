//Program to find the range of a numbers
//Author Aakash  Date 30 Nov 2020
#include <stdio.h>

int main()
{
    int number, min, max, range, total_numbers, i;

    printf("Enter how number you want to give :");
    scanf("%d", &total_numbers);

    printf("Enter number 1 : ");
    scanf("%d", &number);

    min = max = number;

    for (i = 0; i < total_numbers - 1; i++)
    {
        printf("Enter number %d :", i + 2);
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
        }
        if (number < min)
        {
            min = number;
        }
    }
    range = max - min;
    printf("The range of numbers is %d", range);

    return 0;
}