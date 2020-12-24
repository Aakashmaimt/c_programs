//Program to calculate the fine on late book returning according to the days
//Author Aakash  Date October 25,2020
#include <stdio.h>

int main()
{
    int days;
    float fine;
    printf("Enter the number of days :");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 0.50;
        printf("Fine is %f", fine);
    }
    else if(days <= 10)
    {
        fine = 2.50 + (days - 5) * 1;
        printf("Fine is %f", fine);
    }
    else if(days < 30)
    {
        fine = 7.50 + (days - 10) * 5;
        printf("Fine is %f", fine);
    }
    else
    {
        printf("Membership is cancelled");
    }

    return 0;
}