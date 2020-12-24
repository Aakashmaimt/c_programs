//Program to reverse the five digit number
//Author Aakash  Date October 20,2020
#include <stdio.h>

int main()
{
    int number, d1, d2, d3, d4, d5, a1, a2, a3, a4, a5, reverse, temp;
    printf("Enter the five digit number :");
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

    a1 = d5 * 1;
    a2 = d4 * 10;
    a3 = d3 * 100;
    a4 = d2 * 1000;
    a5 = d1 * 10000;
    reverse = a1 + a2 + a3 + a4 + a5;
    printf("The reverse of this %d is %d", number, reverse);

    return 0;
}