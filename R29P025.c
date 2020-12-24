//Program to calculate the overtime payment of a worker
//Author Aakash  Date 25 Nov 2020
#include <stdio.h>

int main()
{
    int time1, time2, time3, overpay1 = 0, overpay2 = 0, overpay3 = 0;

    printf("Enter the total hours of first employee : ");
    scanf("%d", &time1);
    printf("Enter the total hours of second employee : ");
    scanf("%d", &time2);
    printf("Enter the total hours of third employee : ");
    scanf("%d", &time3);

    if (time1 > 40)
    {
        overpay1 = (time1 - 40) * 12;
        printf("Overtime salary of fisrt employee is %d\n", overpay1);
    }
    if (time2 > 40)
    {
        overpay2 = (time2 - 40) * 12;
        printf("Overtime salary of second employee is %d\n", overpay2);
    }
    if (time3 > 40)
    {
        overpay3 = (time3 - 40) * 12;
        printf("Overtime salary of third employee is %d", overpay3);
    }

    return 0;
}