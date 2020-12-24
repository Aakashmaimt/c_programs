//Program to calculate the sum of five digits of a five digit number
//Author Aakash  Date October 20,2020
#include <stdio.h>

int main()
{
    int number, d1, d2, d3, d4, d5, temp, sum;
    printf("Enter the number :");
    scanf("%d", &number);

    temp = number;
    d1 = temp % 10;
    temp = temp / 10;
    d2 = temp % 10;
    temp = temp / 10;
    d3 = temp % 10;
    temp = temp / 10;
    d4 = temp % 10;
    temp = temp / 10;
    d5 = temp % 10;
    temp = temp / 10;

    sum = d1 + d2 + d3 + d4 + d5;
    printf("The sum of %d is %d.", number, sum);

    return 0;
}