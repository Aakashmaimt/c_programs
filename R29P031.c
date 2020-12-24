//Program to find the power of one number raise to the another
//Author Aakash  Date 22 NOV 2020
#include <stdio.h>

int main()
{
    int number, power, result = 1, i;

    printf("Enter the number :");
    scanf("%d", &number);
    printf("Enter the power :");
    scanf("%d", &power);

    for (i = 0; i < power; i++)
    {
        result = result * number;
    }
    printf("The answer is %d", result);

    return 0;
}